# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 17) plus;
* Variable replacements (*$VAR*) was implemeted.
* $$ and $? variables were also implemeted.
* **Usage: command $VAR**  
* If VAR doesn't exist in the environment, it is ignored

julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ echo $HOME**  
/home/julien
**alex@~$ echo $PATH**  
/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin  
**alex@~$ echo $?**  
0  
**alex@~$ ls shit**  
/usr/bin/ls: No such file or directory  
**alex@~$ echo $?**  
2  
**alex@~$ echo $$**  
5162  
**alex@~$ exit**  

julien@ubuntu:\~/shell$  
