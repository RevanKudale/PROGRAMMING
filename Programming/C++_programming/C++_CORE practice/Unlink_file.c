#include<stdio.h>
#include<fcntl.h>        // for creat() system call
#include<unistd.h>       // for unlink() system call //universal header file for all system calls

int main()
{
   unlink("Marvellous.txt");  // delete the file "Marvellous.txt" from the file system
   
    return 0;
}
