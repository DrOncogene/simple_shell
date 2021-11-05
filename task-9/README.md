# simple shell 0.1.1

### Added features  
* This is simple shell 0.1 (task 1) plus a custom line reading function  
* The function is _mygetline_  
* Usage: **simple_shell**  


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
