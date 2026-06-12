#include<stdio.h>
#include<stdlib.h>
//to count the odd numbers in the Array
int CountOdd(int Arr[], int iSize)
{
    int iCount = 0, iCnt = 0; //variable lagel jo summation store karnya sathi ahe

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
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

    iRet = CountOdd(Brr, iLength);

    printf("Count of odd elements is    : %d\n", iRet);
    free(Brr); //allocated memory should be freed after use 

    return 0;
}