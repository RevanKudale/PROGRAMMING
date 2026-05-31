///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//     ACCEPT TWO NUMBERS FROM THE USER AND CHECK WHETHER THE NUMBER IS EVEN OR ODD                  //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == TRUE)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }
    return 0;
}