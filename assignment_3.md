## Encoder
Encoder is:
> From [wikipedia](https://en.wikipedia.org/wiki/Rotary_encoder)
>
>an electro-mechanical device that converts the angular position or motion of a shaft or axle to an analog or digital code.



In your case the encoder for each motor consist of two parts, an encoder wheel and hall effect sensor. There is four ticks for each encoder wheel revolution. Each tick corresponds to a square pulse with one rising and one falling edge. Therefore there is eight changes per encoder wheel revolution. The ration of the gearbox on the motor is 1:48, that is 48 revolutions of the encoder wheel for one revolution of the robot wheel.

## Assignment 3: Read the encoder.
In order to detect encoder tics, the data wire of the hall effect sensor is connected to one of the interrupt pins on the Arduino. As per the connections in assignment 2, encoder signal is connected to pin3 on arduino which is an interrupt pin.

The current encoder wheel and sensor configuration gives 4 pulses for one rotation of encoder wheel. The motor to wheel gear ratio is 1:48, thus per rotation of wheel there will be 192 pulses. 

The below code outputs* encoder counter value periodically, use this to verify how many pulses are generated per rotation of wheel(rotate motor with hand).
*The values are output as serial data and more information about arduino serial communication can be found [here](https://www.arduino.cc/en/Reference/Serial) and [here](https://www.arduino.cc/en/Tutorial/SoftwareSerialExample).
In arduino GUI Tools->Serial Monitor to view the data on Serial Bus.

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

Verify that the estimation of angular speed is correct by mnaually measuring the angular velocity of the motor. To make sure that motor speed is constant you can plot the estimated angular velocity on the [Serial Plotter](https://youtu.be/f7SAO2FCxdg).


{% exercise %}
Define a variable `x` equal to 10.
{% initial %}
var x =
{% solution %}
var x = 10;
{% validation %}
assert(x == 10);
{% context %}
// This is context code available everywhere
// The user will be able to call magicFunc in his code
function magicFunc() {
    return 3;
}
{% endexercise %}



