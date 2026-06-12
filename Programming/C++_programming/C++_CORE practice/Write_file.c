#include<stdio.h>
#include<fcntl.h>        // for creat() system call
#include<unistd.h>       // for unlink() system call //universal header file for all system calls

int main()
{
   int fd = 0;
   int ret = 0;
   char Arr[] = "Marvellous Infosystems";
   fd = open("Marvellous.txt", O_RDWR | O_CREAT, 0777); //O_RDWR for read and write, O_CREAT for create file if not exist, 0777 for permission
   if(fd == -1)
    {
        printf("Unable to Open file\n");
        return -1;
    }
    else
    {
        printf("File opened successfully with file descriptor : %d\n", fd);

        ret = write(fd,Arr,10);
        printf("%d bytes gets successfully written in the file\n", ret);
    }

    close(fd); //close the file descriptor
    
    return 0;
}
