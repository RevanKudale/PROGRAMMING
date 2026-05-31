#include <stdio.h>

void CallybyAddress(int *iPtr)
{
    (*iPtr)++;    //value ekane vadhavlii
}
int main()
{
    int iValue=11;
        
    CallybyAddress(&iValue);

    printf("Value after function call: %d\n",iValue);

    return 0;
}