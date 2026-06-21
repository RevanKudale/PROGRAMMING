#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Ganesh"; 
    int iCount = 0;

    printf("Length of String is: %d\n", strlen(str)); // 6

    while(*str !='\0')
    { 
            iCount++;
            str++;
    } 

    printf("Length of D: %d\n", iCount);  //6

   
    
    return 0;
}
