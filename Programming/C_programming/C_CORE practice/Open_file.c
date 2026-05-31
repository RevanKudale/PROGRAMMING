#include<stdio.h>
#include<fcntl.h>        // for creat() system call
#include<unistd.h>       // for unlink() system call //universal header file for all system calls

int main()
{
   int fd = 0;
   fd = open("Marvellous.txt", O_RDWR | O_CREAT, 0777); //O_RDWR for read and write, O_CREAT for create file if not exist, 0777 for permission
   if(fd == -1)
    {
        printf("Unable to Open file\n");
        return -1;
    }
    else
    {
        printf("File opened successfully with file descriptor : %d\n", fd);
    }
    return 0;
}
