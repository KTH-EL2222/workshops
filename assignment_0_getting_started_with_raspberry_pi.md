# Assignment 0: Getting Started with Rpi
To work on Raspberry Pi you will need:
* Raspberry Pi
* HDMI cable
* Screen
* Micro-SD card
* Keyboard
* Mouse
* 5V Micro-USB Power supply

Before powering up the Raspberry Pi, put it into a RPi case and attach a RPi camera. Insert a MicroSD card with preinstalled Raspbian operating system. Insert mouse and keyboard into the USB ports, and connect screen with an HDMI cable. You are now ready to plug in the power source in the Micro-USB slot of the RPi.

![RPi camera connection](figures/connect-camera.jpg)

User name for the RPi is "pi" and the password is "raspberry".

When the RPi is on, configure network by clicking on WIFI icon on top right corner. The local network that you should use is called `EL2222` with password `dbdeadbeef`. After connecting to the network check the ip-address of the RPi by opening terminal (screen icon on the top left corner) and type `ifconfig`. The ip-address of your raspberry pi will be listed as `inet addr` under the `wlan0` interface. It should be in following format `192.168.1.xxx`. 

To remotely access raspberry pi from your computer you can use [SSH](https://en.wikipedia.org/wiki/Secure_Shell) or [VNC](https://en.wikipedia.org/wiki/Virtual_Network_Computing). SHH will give you access to the command line interface on the remote machine, while you can use graphical interface via VNC. For a tutorial on how to configure remote access on windows follow [this link](ssh_and_vnc.html).

## Introduction to Linux
Let's start using shell. Shell is a command line interface in Linux based operation systems. Shell takes your commands from the keyboard and pass them to the operating system.  A terminal emulator allows you to interact with the shell. What you need to interact with the shell is a screen and a keyboard or the SHH access, you will enter text and you will see the text displayed. You can do all sorts of things from the terminal, e.g. you can copy, create or delete files and folders. In the table below you will find the commands you will commonly use. You can find more information about the shell and other commands following this [link](http://linuxcommand.org/learning_the_shell.php). Now let's try using some commands.


<!-- Table with commands -->
| Command | Argument| Action|
|--:|--|--|
| pwd| | Prints your Present Working Directory|
| ls| | Prints ('list') the content of your present working directory|
| cd| subDirectory|Change directory from present working directory to subDirectory|
| cd|..|Change up from your working directory|
| cd||Change to home directory|
| TAB key||Command line completion|
| ./| filename| Execute the file filename|
| sudo|any other command|Execute the command with root permission|
| mkdir|newDirectory|Creates a directory called newDirectory in the present working directory|
| apt-get|install packageName|Installs package packageName, usually has to be run as root|
| ctrl+c||Kills the current program running|
| cmd | --help | Show what options/arguments are available for command cmd|

Open terminal by clicking on the terminal logo ![](figures/terminal_logo.png) in top-left corner. You can also use bash by accessing RPi with SSH.

In the opened terminal type `pwd` and press ente. This command gives you the present working directory which should be `/home/pi`.

Now we can move on to navigation. Let's start by running the command `ls`, this will give us a list of contents in the working directory. If you now try the command `ls` with argument `-l` (type `ls -l` in the terminal), you will see the content listed along with some extra information, such as their size and the time when it was last edited, this is done by the argument `-l`. If you also want to see the dot files in the directory which are normally hidden, append `a` to the argument by typing `ls -la`. For more information about possible options for `ls` type `ls --help`.

Now that you know your working directory and its content, the next step is to navigate. To go from one directory to another we use `cd` (Change Directory). From the list printed by the `ls` command you can choose a directory to change to it. Go to the python games directory by typing `cd python_games`. Now, the shell prompt looks like this: `~/python_games$`, if you type pwd you will see the full route of the directory you are in. Notice that `~` stands for the home directory, which is `/home/pi`.

To navigate up one directory you type in `cd ..`. If you want to go directly to the home directory just type `cd`.

Let's run a python game. change directory to `python_games` and run `python <GAME>` where `<GAME>` is one of the files with an .py extenssion.

The `sudo` (superuser do) command is used to run commands that need root privileges to run.

The `apt-get` command is used to install packages from online sources, the packages we will be using in these workshops should already be installed but if any new are needed this is the command used. This is also used for updating, you can type in `sudo apt-get update` to update the system and the packages.

## Useful tips: 
* The up arrow key goes through the previous commands you have entered in the shell, similarly the down arrow takes you to the most recent commands. 
* The tab key can be very useful when working in the terminal as it will complete what you have started to type or give you options if what you have typed matches more than one command. When in the home folder, try typing `cd python_g` and then press tab! 
*  When we are running a program, we can stop it using "ctrl+c"

## Get code for workshop 2.
To get code that is going to be used through this workshop run `git clone https://github.com/KTH-EL2222/ws2_code.git` in the home directory of your raspberry pi.
