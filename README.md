Command Line Interpreter
Contributors
Name	GitHub
Alex Le	GitHub
Conner Robbins	GitHub
Harry Derderian	GitHub
Guido Asbun	GitHub
Description
This application implements an interactive shell in which users can execute commands.
Programed in C++ version 20
Interacts with the windows shell using WINPAI
Creates a thread using CreateThread() to run command in shell
Example of interface
Wellcome to myShell
available commands:
1........................ dir
2........................ help
3........................ vol
4........................ path
5........................ tasklist
6........................ notepad
7........................ echo
8........................ color
9........................ ping

C:\Users\CPSC-351-Group-Assignment-1> dir
Volume in drive C has no label.
Volume Serial Number is C880-6C7E

Directory of C:\Users\rodrigoasbun\code\CPSC-351-Group-Assignment-1\CPSC-351-Group-Assignment-1

02/24/2024 09:43 PM <DIR> .
02/24/2024 10:05 PM <DIR> ..
02/18/2024 06:15 PM <DIR> ARM64
02/24/2024 09:43 PM 3,842 CPSC-351-Group-Assignment-1.cpp
02/20/2024 06:52 PM 9,579 CPSC-351-Group-Assignment-1.vcxproj
02/18/2024 06:03 PM 1,000 CPSC-351-Group-Assignment-1.vcxproj.filters
02/18/2024 06:03 PM 168 CPSC-351-Group-Assignment-1.vcxproj.user
4 File(s) 14,589 bytes
3 Dir(s) 211,092,324,352 bytes free

C:\Users\CPSC-351-Group-Assignment-1> help
For more information on a specific command, type HELP command-name
ASSOC Displays or modifies file extension associations.
ATTRIB Displays or changes file attributes.
BREAK Sets or clears extended CTRL+C checking.
BCDEDIT Sets properties in boot database to control boot loading.
CACLS Displays or modifies access control lists (ACLs) of files.
CALL Calls one batch program from another.
CD Displays the name of or changes the current directory.
CHCP Displays or sets the active code page number.
CHDIR Displays the name of or changes the current directory.
CHKDSK Checks a disk and displays a status report.
CHKNTFS Displays or modifies the checking of disk at boot time.
CLS Clears the screen.
CMD Starts a new instance of the Windows command interpreter.
COLOR Sets the default console foreground and background colors.
COMP Compares the contents of two files or sets of files.
COMPACT Displays or alters the compression of files on NTFS partitions.
CONVERT Converts FAT volumes to NTFS. You cannot convert the
current drive.
.
.
.
For more information on tools see the command-line reference in the online help.

C:\Users\CPSC-351-Group-Assignment-1> vol
Volume in drive C has no label.
Volume Serial Number is C880-6C7E

C:\Users\CPSC-351-Group-Assignment-1> path
PATH=C:\Program Files\Parallels\Parallels Tools\Applications;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0;C:\Windows\System32\OpenSSH;C:\Program Files\Microsoft SQL Server\150\Tools\Binn;C:\Program Files\Microsoft SQL Server\Client SDK\ODBC\170\Tools\Binn;C:\Program Files\dotnet;C:\Users\rodrigoasbun\AppData\Local\Microsoft\WindowsApps;C:\Users\rodrigoasbun.dotnet\tools

C:\Users\CPSC-351-Group-Assignment-1> tasklist
Image Name PID Session Name Session# Mem Usage
========================= ======== ================ =========== ============
System Idle Process 0 Services 0 8 K
System 4 Services 0 292 K
Registry 116 Services 0 32,288 K
smss.exe 432 Services 0 1,248 K
csrss.exe 592 Services 0 6,324 K
wininit.exe 672 Services 0 7,840 K
csrss.exe 680 Console 1 73,348 K
winlogon.exe 772 Console 1 13,620 K
services.exe 820 Services 0 10,780 K
lsass.exe 844 Services 0 27,504 K
.
.
.

C:\Users\CPSC-351-Group-Assignment-1> notepad
---> opens noptepad applicationin another window
C:\Users\CPSC-351-Group-Assignment-1> echo
ECHO is on.

C:\Users\CPSC-351-Group-Assignment-1> color 4
C:\Users\CPSC-351-Group-Assignment-1> color 7
C:\Users\CPSC-351-Group-Assignment-1> ping 1.1.1.1
Pinging 1.1.1.1 with 32 bytes of data:
Reply from 1.1.1.1: bytes=32 time=14ms TTL=128
Reply from 1.1.1.1: bytes=32 time=22ms TTL=128
Reply from 1.1.1.1: bytes=32 time=19ms TTL=128
Reply from 1.1.1.1: bytes=32 time=20ms TTL=128

Ping statistics for 1.1.1.1:
Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
Minimum = 14ms, Maximum = 22ms, Average = 18ms

C:\Users\CPSC-351-Group-Assignment-1> exit
---> Terminates Program
