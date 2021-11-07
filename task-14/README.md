# simple shell 1.0+

### Additional features in this version
* This version is simple shell 1.0+ (task 13) plus;
* cd builtin command implemented. It changes cwd to DIR
* **Usage: cd [DIR]**
* If DIR is not specified, cd changes to $HOME
* If DIR is **-**, cd changes the cwd to $OLDPWD

julien@ubuntu:\~/shell$ ./shell-1.0+  

**$ pwd**  
/home/julien/shell  
**$ cd**  
**$ pwd**  
/home/julien  
**$ cd /bin**  
**$ pwd**  
/bin  
**$ cd -**  
/home/julien  
**$ pwd**  
/home/julien  
**$ exit**  

julien@ubuntu:\~/shell$  
