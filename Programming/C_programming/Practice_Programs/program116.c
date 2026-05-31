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
    Brr[0] = 10;
    Brr[1] = 20;
    Brr[2] = 30;
    Brr[3] = 40;


  Display(Brr, iLength);    //we can pass array name as argument to function because array name is the address of first element of array
    return 0;
}