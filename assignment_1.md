## Pulse-width modulation (PWM)
Pulse Width Modulation (PWM) is a method for generating a replacement for continuously variable analogue signal using a digital source that can only vary the output between two values, off/low and on/high.  A PWM signal is controlled by two parameters; the duty cycle and the switching frequency.  The duty cycle describes the amount of time the signal is in a high (on) state as a percentage of the total cycle time (period).  In figure below we can see that the signal is on 25% of the cycle time.  The switching frequency determines how fast the PWM completes a cycle (i.e.  1000 Hz would be 1000 cycles per second), and therefore how fast it switches between high and low states.  By cycling the digital signal off and on at a fast enough rate, and with a certain duty cycle, the output will appear to behave like a constant voltage analog signal with a value anywhere between the low and the high level when providing power to devices.

<center>
<img src="workshop1/pwm.png" alt="schematics" width="300"/>
</center>

As an example, to create a 3V signal given a digital source of 5V that can be either high (on) or low (off) at 0V, you can use PWM with a duty cycle of 60% which outputs 5V 60% of the time.  If the digital signal is cycled fast enough, then the voltage seen at the output appears to be the average voltage.  If the digital low is 0V (which is usually the case) then the average voltage can be calculated by taking the digital high voltage multiplied by the duty cycle, or 5V x 0.6 = 3V. Selecting a duty cycle of 80% would yield 4V, 20% would yield 1V, and so on.

PWM signals are used for a wide variety of control applications.  The main use in this lab will be for controlling DC motors, but it can also be used to control LEDs, servos, valves, pumps, hydraulics, and other mechanical parts.  The frequency that the PWM signal needs to be set at will be dependent on the application and the response time of the system that is being powered.  The switching frequency should be high compared to what the device can react to.

## Assignment 1: Dim the lights!
In the [previous assignment](assignment_0.html) you have tried out a program that made a LED to blink. In this assignment we will dim LED using PWM technique. According to the [technical specifications](https://www.arduino.cc/en/Main/ArduinoBoardUno#techspecs) for Arduino UNO there are six available PWM pins. For this tutorial you need to connect your serial connection of LED and resistor to one of the PWM pins marked with ~. Connect you LED to pin number 9 and upload following code to the Arduino. By varying val you should see that intensity of the LED depends on the duty cycle of the PWM signal.  

```cpp
int LED_PIN = 9;      // LED connected to digital pin 9
int val = 100;         // value: the duty cycle: between 0 (always off) and 255 (always on).

void setup(){
  pinMode(LED_PIN, OUTPUT);   // sets the pin as output
}

void loop(){
  analogWrite(LED_PIN, val);  // analogWrite values from 0 to 255
}
```

#### Task
Using the code above as starting point, write a script that varies intensity of the LED in cycle of 5 seconds.

To complete this assignment in-build functions [millis()](https://www.arduino.cc/en/Reference/Millis), [delay()](https://www.arduino.cc/en/Reference/delay) and [analogWrite()](https://www.arduino.cc/en/Reference/AnalogWrite) should be sufficient.
