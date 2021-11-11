# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 15) plus;
* Ability to handle command line logical operators *&&* and *||*.
* && execute the rightmost command only if the left operand run successfully i.e. exited with a value of 0.
* || execute all the commands. If 
* **Usage: ls -l && echo done**
* **Usage: ls -l || ls ..**


julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ ls /var && ls /var**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ ls /hbtn && ls /var**  
ls: cannot access /hbtn: No such file or directory  
**alex@~$ ls /var && ls /var && ls /var && ls /hbtn**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
ls: cannot access /hbtn: No such file or directory  
**alex@~$ ls /var && ls /var && ls /var && ls /hbtn && ls /hbtn**
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
ls: cannot access /hbtn: No such file or directory  
**alex@~$**  
**alex@~$ ls /var || ls /var**  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ ls /hbtn || ls /var**  
ls: cannot access /hbtn: No such file or directory  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ ls /hbtn || ls /hbtn || ls /hbtn || ls /var**  
ls: cannot access /hbtn: No such file or directory  
ls: cannot access /hbtn: No such file or directory  
ls: cannot access /hbtn: No such file or directory  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ ls /hbtn || ls /hbtn || ls /hbtn || ls /var || ls /var**  
ls: cannot access /hbtn: No such file or directory  
ls: cannot access /hbtn: No such file or directory  
ls: cannot access /hbtn: No such file or directory  
backups  cache  crash  lib  local  lock  log  mail  metrics  opt  run  spool  tmp  
**alex@~$ exit**

julien@ubuntu:\~/shell$  
