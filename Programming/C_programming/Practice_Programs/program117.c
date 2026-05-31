#include <stdio.h>


void Display(int Arr[], int Size)                //looks like array but its a pointer
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()

{
    int iLength = 4;

   int Brr[iLength];
   int iCnt= 0;
   for(int iCnt = 0; iCnt < iLength; iCnt++)
   {
    scanf("%d",&Brr[iCnt]);
   }



  Display(Brr,iLength); 
     
    return 0;
}