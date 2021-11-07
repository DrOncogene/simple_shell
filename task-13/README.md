# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0 (task 6) plus;
* setenv and unsetenv builtin were implemented.
* setenv sets or modify an environment variable to value
* 
**Usage: setenv VARIABLE VALUE**
**Usage: setenv VARIABLE**

julien@ubuntu:\~/shell$ ./shell-  

**$ env**  
USER=julien  
LANGUAGE=en_US  
SESSION=ubuntu  
COMPIZ_CONFIG_PROFILE=ubuntu  
SHLVL=1  
HOME=/home/julien  
C_IS=Fun_:)  
DESKTOP_SESSION=ubuntu  
LOGNAME=julien  
TERM=xterm-256color  
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin  
DISPLAY=:0  
**$ setenv NAME myshell**   
**$ env**  
USER=julien  
LANGUAGE=en_US  
SESSION=ubuntu  
COMPIZ_CONFIG_PROFILE=ubuntu  
SHLVL=1  
HOME=/home/julien  
C_IS=Fun_:)  
DESKTOP_SESSION=ubuntu  
LOGNAME=julien  
TERM=xterm-256color  
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin  
DISPLAY=:0
NAME=myshell
**$ unsetenv NAME**  
**$ env**  
USER=julien  
LANGUAGE=en_US  
SESSION=ubuntu  
COMPIZ_CONFIG_PROFILE=ubuntu  
SHLVL=1  
HOME=/home/julien  
C_IS=Fun_:)  
DESKTOP_SESSION=ubuntu  
LOGNAME=julien  
TERM=xterm-256color  
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin  
DISPLAY=:0  
**$ exit**  

julien@ubuntu:\~/shell$  
