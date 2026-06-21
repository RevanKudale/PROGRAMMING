#include <stdio.h>


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);             //REGECTS //how to accept string using Special scanf       

    printf("Entered String: %s\n", Arr);

    return 0;
}
