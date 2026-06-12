#include<stdio.h>
#include<stdlib.h>
//sumation of even numbers only in the array
int SumEven(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0; //variable lagel jo summation store karnya sathi ahe

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    
    printf("Enter the Number of Elements : \n");
    scanf("%d",&iLength);

    Brr= (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = SumEven(Brr, iLength);

    printf("Sum of even elements is    : %d\n", iRet);
    free(Brr); //allocated memory should be freed after use 

    return 0;
}