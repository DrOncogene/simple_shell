# simple shell 0.3

### Additional features in this version 
1. PATH is handled

This means that the full path of the program does need to be entered
**Usage: program [args] ...**

**julien@ubuntu:~/shell$ ./shell_0.3**

**:) /bin/ls**

env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait

**:) ls**

env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait

**:) ls -l /tmp**

total 20
-rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR  
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr  
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV  
drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH  
-rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0  

**:) ^C**

**julien@ubuntu:~/shell$**
