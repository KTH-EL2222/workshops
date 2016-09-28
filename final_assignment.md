## Final Assignment

In the final assignment you have to completely build your robot, by follow the steps below. In order to facilitate your work we have created a [code skeleton](https://github.com/KTH-EL2222/code/archive/master.zip) with a motor class. You have to populate the motor class with methods/functions. The code skeleton also includes communication protocol that is going to be used in the second workshop. For further information about the code skeleton can be found [here](code.html).

1. Assemble robot
  1. Mechanics
    * Solder wires to the motors.
    * Attach encoder wheel and the hall effect sensor.
    * Fasten cables with cable ties around the motor.  
    * Fasten arduino, breadboard and motors on the acrylic sheet, make sure there is space for RPi.
  2. Electronics
    * Solder wires to the voltage regulator.
    * Make sure that Voltage regulator output 5V while attached to 12V supply. You can check voltage with a multimeter.
    * Connect all parts as shown on the figure below.
2. Make both wheels rotate
3. Read encoders for both motors
4. Code skeleton for implementing PID is available [here](https://github.com/KTH-EL2222/code/archive/master.zip). Further details of code are in comments and Readme of the repository. 
5. Move the robot with certain velocity, say 0.2m/s by implementing PID control.
6. Move Robot in a circle of 1m diameter, apply PID to control speeds of both wheels to achieve this. 

<center>
<img src="workshop1/breadbord_schematics.png" alt="two_motors" width="500"/>
</center>

If you are not familiar with differential drive kinematics read [this](https://chess.eecs.berkeley.edu/eecs149/documentation/differentialDrive.pdf). Furthermore, relation between velocities of the robot and velocities of the wheels as follows:

$$ \omega = \frac{V_r-V_l}{L} $$, $$v = \frac{V_r+V_l}{2}$$
where $$V_l$$ and $$V_r$$ are the velocities of the left and right wheels, $$\omega$$ angular velocity, and $$v$$ linear velocity of the robot. 

For the workshop 2 your robot supposed to act on commands of linear and angular velocities received from raspberry pi.