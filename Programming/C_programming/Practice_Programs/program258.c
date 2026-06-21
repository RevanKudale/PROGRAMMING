// Accept string from user and replace the Letter L wtih *

#include <stdio.h>

void Update(char *str)
{
    

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            *str = '*';
        }

        str++;

    }

    
}

int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);   
    
    Update(Arr);
    printf(" updated string is %s\n",Arr);

   

    return 0;
}
