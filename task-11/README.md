# simple shell 0.4.1

### Additional features in this version 
* This version is simple shell 0.4 (task 5) plus the ability to hand argument (status) passed to the exit builtin function
* The shell exits with the passed status, if one is passed
* No argument to it is handled

**Usage: exit**

julien@ubuntu:\~/shell$ ./shell-0.4

**:) exit**

julien@ubuntu:\~/shell$ ./shell-0.4

**:) exit 98**

julien@ubuntu:\~/shell$ echo $?  
98
