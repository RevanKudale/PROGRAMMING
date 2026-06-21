// Accept string from user and count the vowels

#include <stdio.h>

int CountVowels(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'i' || *str == 'e' || *str == 'o' || *str == 'u' || 
           *str == 'A' || *str == 'I' || *str == 'E' || *str == 'O' || *str == 'U' )
        {
            iCount++;
        }

        str++;

    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);   
    
    iRet = CountVowels(Arr);
    printf("Vowel count is %d\n",iRet);

   

    return 0;
}
