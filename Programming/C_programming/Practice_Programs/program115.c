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

   // int Brr[iLength] = {10, 20, 30, 40}; //Error because size of array should be constant at compile time but here we are taking size of array from user at runtime
   
   //  Display(Brr, iLength);    //we can pass array name as argument to function because array name is the address of first element of array
    return 0;
}