# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 20) plus;
* history builtin implemented. The history is written in to a file in $HOME upon exit.
* **Usage: history**  
 
julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ history**  
**alex@~$ ls /var**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ echo the shell**  
the shell  
**alex@~$ history**  
ls /var  
echo the shell  
history  
**alex@~$ exit**

julien@ubuntu:\~/shell$  
