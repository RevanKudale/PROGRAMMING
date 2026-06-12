#include<stdio.h>
#include<stdlib.h>
//to accept n elements from user and to calculate the times of 11 occurs in that n elements we have to calculate the frequency
int CountFrequency(int Arr[], int iSize)
{
    int iCount   = 0,  iCnt = 0; //variable lagel jo summation store karnya sathi ahe

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    iRet = CountFrequency(Brr, iLength);

    printf("Frequency of the no. 11  is    : %d\n", iRet);
    free(Brr); //allocated memory should be freed after use 

    return 0;
}