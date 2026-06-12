#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//TIME COMPLEXITY = O(N) 
int Maximum(int Arr[], int iSize)
{
    int   iCnt = 0; //variable lagel jo summation store karnya sathi ahe loop firavnya sathi 
    int iMax = 0; 
    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt]; //update iMax with the current element if it is greater than the current maximum
        }
    }
    return iMax;
}
          

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
   

    printf("Enter the Number of Elements : \n");
    scanf("%d", &iLength);

    Brr = malloc(iLength * sizeof(int));
    if (Brr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

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