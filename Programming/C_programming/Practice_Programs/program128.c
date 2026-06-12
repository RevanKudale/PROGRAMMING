#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//to accept n elements from user and to check whether it contains 11 or not 
bool LinearSearch(int Arr[], int iSize)
{
    int   iCnt = 0; //variable lagel jo summation store karnya sathi ahe

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }

   // return false; //LOOP madhna return lihaaycha nastah which is considered as bad programming practice
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
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

    bRet = LinearSearch(Brr, iLength);

    if(bRet == true)
    {
        printf("11 is present in the given array\n");
    }
    else
    {
        printf("11 is not present in the given array\n");
    }

    free(Brr); //allocated memory should be freed after use

    return 0;
}