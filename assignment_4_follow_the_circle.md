# Assignment 4: Follow the circle.

Switch back to Raspberry pi and test `communication_test.py` script. Investigate what it is doing and try to apply that with your circle detection.

To test communication plug Arduino to one of the USB ports on the raspberry pi. Find where `communication_test.py` is located and switch to this directory. Run the code by typing `python communication_test.py`. It will prompt you for linear and angular velocities and for how long it supposed to send this command.

### Task
Design a control loop that makes your robot follow circle that we detect with OpenCV. By knowing that radius of the circle is constant, you can approximate distance to the circle by the detected radius in the image. Furthermore, the coordinates of the circle center are related to how circle is positioned with respect to the robot.

## Final task.
Make your robot follow a face. Checkout [this link]() to see how you can use OpenCV to detect faces.

###NOTES:
If you want to run your robot with a battery ask your TA how to do that.