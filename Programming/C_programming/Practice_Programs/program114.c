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
    int Brr[4] = {10, 20, 30, 40};
   
    Display(Brr, 4);    //we can pass array name as argument to function because array name is the address of first element of array
    return 0;
}