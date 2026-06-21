#include <stdio.h>
#include<string.h> // inbuilt header file
int main()
{
    char str[] = "Jay Ganesh";
    int iRet = 0;

    iRet = strlen(str); // function

    printf("Length of string is: %d\n", iRet); 
    iRet = sizeof(str); //operator
    printf("Size of Array is: %d\n", iRet);
    return 0;
}
