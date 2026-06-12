#include<stdio.h>
#include<stdlib.h>
//to accept the user from the user and return the minimum element from that array
//TIME COMPLEXITY = O(N) 
int Minimum(int Arr[], int iSize)
{
    int   iCnt = 0; //variable lagel jo summation store karnya sathi ahe loop firavnya sathi 
    int iMin = 0; 
    iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt]; //update iMin with the current element if it is smaller than the current minimum
        }
    }
    return iMin;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    printf("Enter the Number of Elements : \n");
    scanf("%d", &iLength);
    Brr = malloc(iLength * sizeof(int));
    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    iRet = Minimum(Brr, iLength);
    printf("Minimum element is: %d\n", iRet);
    free(Brr); //allocated memory should be freed after use
    return 0;
}