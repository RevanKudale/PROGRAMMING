#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//to accept n elements from user and to check whether it contains 11 or not without using BFLAG IN the loop
//TIME COMPLEXITY = O(N) AND SPACE COMPLEXITY = O(1)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int   iCnt = 0; //variable lagel jo summation store karnya sathi ahe
    int iCount = 0; 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            
        }

    }
    if(iCount == 0)
    {
        return false;
    }
    return true;
}
    

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;

    
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
    printf("Enter the element to search: \n");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("Element is present in the given array\n");
    }
    else
    {
        printf("Element is not present in the given array\n");
    }

    free(Brr); //allocated memory should be freed after use

    return 0;
}