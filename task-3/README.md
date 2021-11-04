# simple shell 0.2

### Additional features in this version 
* Arguments to commands are handled
* Full path to programs must be entered as PATH is not handled yet

**Usage: filepath [args] ...**

julien@ubuntu:\~/shell$ ./shell_0.3

**:) /bin/ls -l**  
total 20  
-rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR  
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr  
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV  
drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH  
-rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0  

**:) /bin/echo arguments handled**  
arguments handled

**:) ^C**

julien@ubuntu:\~/shell$ 
