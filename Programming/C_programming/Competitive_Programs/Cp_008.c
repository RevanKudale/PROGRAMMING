///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//     ACCEPT ONE NUMBER FROM THE USER AND IF THE NUMBER IS < 10 PRINT HELLO OTHERWISE PRINT DEMO    //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("hello\n");
    }
    else
    {
        printf("demo\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}