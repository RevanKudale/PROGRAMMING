#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the Array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) 
    {
        printf("%d ", Arr[iCnt]);
    }
    printf("\n");
}


int main()
{
    int *Brr = NULL;
    int iLength = 0;    int iCnt = 0;


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
    Display(Brr, iLength);

    //STEP5 : Deallocate the memory
    free(Brr);

    return 0;
}