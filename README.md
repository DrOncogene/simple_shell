# SIMPLE SHELL PROJECT

## NAME
**simple_shell** - a command line interpreter that take commands and execute them

## SYNOPSIS
Interactive mode
: simple_shell

Non-interactive mode
: commands [...] | simple_shell
: simple_shell [filename]

## DESCRIPTION
simple_shell is a simple command line interpreter that works both in interactive and none interactive mode.  

In the interactive mode, the shell request of input and run the commands entered.  

Output of other programs can be piped to it or it can be passed a file containing lines of commands which it excute by line until end of file is reached and the shell exits.  

## BUILT-IN COMMANDS
**exit [STATUS]** 
: exits the shell, returning the integer STATUS to the parent process, if provided, or 0 if not.  

**env** 
: prints the current environment variables one on each line.  

**cd [DIR]** 
: changed the cwd to **dir** or to previous directory if DIR is **-**, else changes the cwd to $HOME if DIR is not supplied.  

**setenv VARIABLE VALUE** 
: sets the environment variable named VARIABLE to VALUE, if it already exists or adds it to the environment if not.  

**unsetenv VARIABLE**
: deletes the environment variable VARIABLE.  

**alias [name[='value'] ...]**  
:: *alias*  
 with no argument, prints a list of all aliases, one per line in the form *name='value'*.  
:: *alias name [name2...]*  
 with only names as argument, it prints only the alias specified by *name*.  
:: *alias name='value' [..]*  
 Defines an alias for each *name* whose value is given. If an alias for *name* exists, replaces its value with *value*.

## EXIT VALUES
**0**:  
: if in interactive mode or all commands were executed successfully in non-interactive mode.   

**-1**:  
: if all commands could not be run successfully in non-interactive mode.

**status**:  
: an integer exit value passed as an argument to the **exit** builtin command.

## COPYRIGHT
Copyright (c) 2021 Abdulrasheed Nasir. Written as part of the ALX Software Engineering training program. It is free to use, modify and redistribute. There is NO WARRANTY whatsoever.
