  # Make it move

Take a quick look at our robot system. We have a low level motor control running on Arduino. High level perception on Raspberry pi where you detect a circle. However, we have still not established any communication between Raspberry pi and Arduino. Figure below shows a diagram of your robot. The red circle is the part that is what we are going to deal with in this assignment.

![EL2222_robot](figures/EL2222_Robot.png)

## Act on command.

Lets make sure that Arduino receives commands and act according to your commands. Copy your Arduino code to Raspberry pi. You can copy your files by using a USB-memory stick, SFTP manger like Filezilla or shell command scp. To use Filezilla or scp you need to check the local ip-address of your Rpi, use `ifconfig` for that. You also need to make sure that your computer and Rapsberry pi are on the same local network. Use local network that have been configured for this course. SSID of the wifi network is `EL2222` and the password is `dbdeadbeef`. You can find instructions for Filezilla and scp by following this link.<!-- TODO: add link --> It is also possible to use web browser on RPi to download your code from GitHub, BitBucket, Dropbox or other cloud storages.

Connect Arduino by using any of the USB-ports on the Raspberry pi. Open your code on the Arduino IDE, try to upload your code to the Arduino.

Now lets modify your code so that Arduino can get commands from Serial the communication port. The commands that we are going to use are, linear and angular velocity of the robot. linear velocity is how fast robot should move forward or backward and angular velocity is the turning velocity of your robot. Mapping between velocities and wheel velocities as follows:

$$ \omega = \frac{V_r-V_l}{L} $$

$$v = \frac{V_r+V_l}{2}$$

where $$\omega$$ and $$v$$ are angular and linear velocities, $$V_l$$ and $$V_r$$ velocities of the left and right wheels.

### Task
Modify your code so that given a linear and angular velocity your robot act accordingly. Include `raspberryCom.ino` in your sketch and use it to get commands from the serial port. Make sure to stop motor if no command received for some iterations.

Test your system by sending commands to Arduino through a serial monitor. Make sure you have checked new line as ending character  <!-- TODO: add image, check if it is called ending character -->
