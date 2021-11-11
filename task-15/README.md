# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 14) plus;
* Ability to handle command separator (;). The shell runs each command separately
* **Usage: ls -l ; echo done ; exit**


julien@ubuntu:\~/shell$ ./shell-1.0+  

**$ ls /var ; ls /var**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**$ ls /hbtn ; ls /var**  
ls: cannot access /hbtn: No such file or directory  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**$ ls /var ; ls /hbtn**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
ls: cannot access /hbtn: No such file or directory  
**$ ls /var ; ls /hbtn ; ls /var ; ls /var; exit**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
ls: cannot access /hbtn: No such file or directory  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  

julien@ubuntu:\~/shell$  
