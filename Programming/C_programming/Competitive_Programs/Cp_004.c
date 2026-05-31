#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
//     ACCEPT ONE NUMBER FROM THE USER & CHECK IF IT IS DIVISIBLE BY 5             //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0) 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;
}