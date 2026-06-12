#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0; //variable lagel jo summation store karnya sathi ahe

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
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

    iRet = Summation(Brr, iLength);

    printf("Summation of all elements is : %d\n", iRet);
    free(Brr); //allocated memory should be freed after use 

    return 0;
}