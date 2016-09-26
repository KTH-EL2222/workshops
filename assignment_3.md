## Encoder
Encoder is:
> From [wikipedia](https://en.wikipedia.org/wiki/Rotary_encoder)
>
>an electro-mechanical device that converts the angular position or motion of a shaft or axle to an analog or digital code.



In your case the encoder for each motor consist of two parts, an encoder wheel and a [hall effect sensor](https://en.wikipedia.org/wiki/Hall_effect_sensor). The encoder wheel is divided in 8 equal sections, four magnets and four empty slots. Rotation of the encoder wheel entails changes in magnetic field, that is perceived by the hall effect sensor. There is four ticks in encoder signal for each encoder wheel revolution. Because each tick corresponds to a square pulse with one rising and one falling there is eight changes per encoder wheel revolution. The ration of the gearbox on the motor is 1:48, that is 48 revolutions of the encoder wheel for one revolution of the robot wheel.

## Assignment 3: Read the encoder.
In order to detect encoder tics, the data wire of the hall effect sensor is connected to one of the interrupt pins on the Arduino. As per the connections in the assignment 2, encoder signal is connected to pin3 on arduino which is an interrupt pin.

The current encoder configuration gives 4 pulses for one rotation of encoder wheel. The motor to wheel gear ratio is 1:48, thus per rotation of the wheel there will be 192 pulses. 

The code below increase the count value by one for each rising edge in the encoder signal. The code outputs \* the count value each 200 ms. Use this code to verify how many pulses are generated per one revolution of the wheel (You may rotate wheel by hand). 

\* The values are output as serial data and more information about arduino serial communication can be found [here](https://www.arduino.cc/en/Reference/Serial) and [here](https://www.arduino.cc/en/Tutorial/SoftwareSerialExample). To view serial output use serial monitor, in arduino GUI Tools->Serial Monitor.

```cpp
const byte encoderPin = 3;
unsigned int count=0;

void setup() {
  pinMode(encoderPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(encoderPin), encoder_counter, RISING);
  Serial.begin(9600); //Begin Serial communication with 9600 baud rate
}

void loop() {
  Serial.println(count); // send count data with a new line at end. 
  delay(200);
}

void encoder_counter() {
  count++;
}
```
#### Task
By using above code as starting point make a function that calculates angular velocity of the wheel in rotations per second (rps). Furthermore it is possible to double the resolution of the encoder by configuring the interrupt to trigger on CHANGE (i.e, on both falling and rising edge). 

Verify that the estimation of angular speed is correct by manually measuring the angular velocity of the motor. To make sure that motor speed is constant you can plot the estimated angular velocity on the [Serial Plotter](https://youtu.be/f7SAO2FCxdg).