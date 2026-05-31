/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
//     ACCEPT ONE NUMBER FROM THE USER AND PRINT THAT NUMBER OF * ON THE SCREEN    //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
   int iCnt=0;
   while(iCnt<iNo)
   {
       printf("*\n");
       iCnt++;
   }
}
int main()
{
    int iValue = 0;
    printf("Enter the number of * you want to print : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}   