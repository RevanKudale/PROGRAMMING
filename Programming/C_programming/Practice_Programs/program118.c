#include <stdio.h>



int Summation(int Arr[], int Size)               
{
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}


int main()

{
    int iLength = 4;
    int iRet = 0;
   int Brr[iLength];
   int iCnt= 0;

   printf("Enter the Numbers to be Added : \n");
   for(int iCnt = 0; iCnt < iLength; iCnt++)
   {
    scanf("%d",&Brr[iCnt]);
   }
   iRet= Summation(Brr,iLength);
   printf("Addition of all Elements : %d\n",iRet);

     
    return 0;
}