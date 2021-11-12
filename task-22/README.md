# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 21) plus;
* file mode is implemeted. The file contains one command per line.
* All commands are run one after the other and the shell exits.
* **Usage: simple_shell [filename]**  
 
julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ cat testfile**  
ls /var
echo $HOME
history
**alex@~$ ./shell-1.0+ testfile**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
/home/julien  
ls /var  
echo $HOME  
history  
**alex@~$ exit**  

julien@ubuntu:\~/shell$  
