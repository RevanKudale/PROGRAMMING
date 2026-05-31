#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum=0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++) 
    {
        iSum += Arr[iCnt];
    }
    printf("Sum of all elements is : %d\n", iSum);
    printf("\n");
    return iSum;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0; 


    //STEP 1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iLength); 

    //STEP 2: Dynamic memory allocation
    Brr=(int *)malloc(iLength * sizeof(int)); 

    //STEP 3: Accept the VALUES from user
    printf("Enter the ELements: \n");

    for(iCnt=0 ; iCnt<iLength ; iCnt++)
        {
            scanf("%d",&Brr[iCnt]);
        }

    //STEP 4: Use the memory(LOGIC)
    iRet = Summation(Brr, iLength);
    printf("Addition is : %d\n",iRet);

    //STEP5 : Deallocate the memory
    free(Brr);

    return 0;
}