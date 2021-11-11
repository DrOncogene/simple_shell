# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 16) plus;
* alias builtin command is implemented
* **Usage: alias [name[='value'] ...]**  

**alias**  
with no argument, prints a list of all aliases, one per line in the form of *name='value'*.  
**alias name [name2...]**  
with only names as argument, it prints only the aliases specified by the *names*.  
**alias name='value' [..]**  
Defines an alias for each *name* whose value is given. If an alias for *name* exists, replaces its value with *value*.



julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ alias myls='ls'**  
**alex@~$ myls /var**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ alias myls**  
myls='ls'
**alex@~$ alias myecho='echo'**
**alex@~$ alias**  
myls='ls'  
myecho='echo'  
**alex@~$ myecho this is my shell**  
this is my shell  
**alex@~$ alias myecho**  
myecho='echo'  
**alex@~$ exit**  

julien@ubuntu:\~/shell$  
