# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 18) plus;
* Comment handling (#) is impemented.
* **Usage: command #comment**  
* All commands and args after comment sign are ignored  
 
julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ echo the#shell**  
the#shell  
**alex@~$ echo the #shell**  
the  
**alex@~$ ls /var #/var**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ echo #$$**  

**alex@~$ exit**  

julien@ubuntu:\~/shell$  
