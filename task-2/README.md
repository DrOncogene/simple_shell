# simple shell 0.1

### A UNIX command line interpreter 
* Usage: **simple_shell**  

The shell:  
* Displays a prompt and wait for the user to type a command. A command line always ends with a new line.  
* The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.  
* The command lines are made only of one word. No arguments will be passed to programs.  
* If an executable cannot be found, print an error message and display the prompt again.  

The shell doesn't:
* use the PATH  
* implement built-ins  
* handle special characters : ", ', `, \, *, &, #  
* move the cursor
* handle commands with arguments

julien@ubuntu:\~/shell$ ./shell  

**#cisfun$ ls**  
./shell: No such file or directory  
**#cisfun$ /bin/ls**  
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c  
**#cisfun$ /bin/ls -l**  
./shell: No such file or directory  
**#cisfun$ ^[[D^[[D^[[D**  
./shell: No such file or directory  
**#cisfun$ ^[[C^[[C^[[C^[[C**  
./shell: No such file or directory  
**#cisfun$ exit**  
./shell: No such file or directory
**#cisfun$ ^C** 

julien@ubuntu:\~/shell$ echo "/bin/ls" | ./shell   
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c  

julien@ubuntu:\~/shell$
