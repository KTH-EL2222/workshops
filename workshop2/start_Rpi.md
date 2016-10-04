## Getting Started with Rpi
To work on RaspberryPi you will need:
* RaspberryPi
* HDMI cable
* Screen
* MicroSD card
* Keyboard
* Mouse
* 5V Micro-USB Power supply

Before Powering up RaspberryPi, put it into a RPi case and attach RPi camera. Insert a MicroSD card with pre-installed Raspbian operating system. Insert mouse and keyboard into the USB port, and connect screen with an HDMI cable. You are now ready to plug in the power source in the Micro-USB slot of the RPi.

Username for the RPi is "pi" and the password is "raspberry".

### Introduction to Linux
Let's start introducing the command line interface (CLI) to you. CLI is a program that takes your commands from the keyboard and gives them to the operating system to perform.  A terminal emulator allows you to interact with the shell. What you need to interact with the shell is a screen and a keyboard, you will enter text and you will see the text displayed. You can do all sorts of things from the terminal, e.g. you can copy les, create or delete les and folders and do many other things. In Table 1 you will nd the commands you will commonly use. You can nd more information about the shell and other commands in this link: http://linuxcommand.org/learning_the_shell.php . Now let's try using these commands. 

|Command| Argument| Action|
|--:|--|--|
|pwd| | Prints your Present Working Directory
|ls| | Prints ('list') the content of your present working directory
|cd| subfolder|Change directory from present working directory to subfolder
|cd|..|Change up from your working directory
|cd||Change to home directory
|TAB key||Command line completion
|./| filename| Execute the file filename
|sudo|any other command|Execute the command with root permission
|mkdir|newDirectory|Creates a directory called newDirectory in the present working directory
|apt-get|install packagename|Installs package packagename, usually has to be run as root
|ctrl+c||Kills the current program running

Type pwd in the terminal en press enter, this command gives you the present working direc- tory which should be /home/pi .

Now we can move on to navigating the terminal, let's start by running the command ls , this will give us a list of contents in the working directory. If you now try the command ls with the ag -l (type ls -l in the terminal), you will see the content listed along with some extra information such as their size and the time when it was last edited, this is done by the "l". If you also want to see the dot les in the folder which are normally hidden, append "a" to the ag by typing ls -la .

Now that you know in which directory you are and the contents of it, the next step is to navigate. To go from one directory to another we use cd . From the list printed by the ls command you can choose a folder to change to it. Go to the python games directory by typing cd python games. Now, the shell prompt looks like this: ~/python games$ , if you type pwd you will see the full route of the directory you are in. Notice that \ ~ " stands for the home directory, which is /home/pi .

To navigate up one directory you type in \ cd .. ". If you want to go directly to the home directory just type \ cd ". 3

The next command in Table reftable:ComTab is the ./ filename which will execute the  le \ lename", we will use this in a later workshop when we want to run programs we have written.

The sudo command is used to run commands that need root privileges to run, we need to use this when we run programs that use the GPIOs.

The apt-get command is used to install packages from online sources, the packages we will be using in these workshops should already be installed but if any new are needed this is the command used. This is also used for updating, you can type in sudo apt-get update to update the system and the packages.

#### Useful tips: 
* The up arrow key goes through the previous commands you have entered in the shell, similarly the down arrow takes you to the most recent commands. 
* The tab key can be very useful when working in the terminal as it will complete what you have started to type or give you options if what you have typed matches more than one command.
* When in the home folder, try typing cd python g and then press tab!  When we are running a program, we can stop it using "ctrl+c"
