# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 119) plus;
* help builtin command implemented.
* **Usage: help [command]**  
 
julien@ubuntu:\~/shell$ ./shell-1.0+  

**alex@~$ help**  
help: help [command]  
&emsp;This is the help builtin command, supply a built-in command to display  
&emsp;its help text.  
&emsp;Builtins: exit, cd, alias, env, setenv, unsetenv  
**alex@~$ help exit**  
exit: exit [n]  
&emsp;exits the shell with status n or status of last command if n is not given  
**alex@~$ exit**  

julien@ubuntu:\~/shell$  
