#include <stdio.h>

void CallybyValue(int iNo)
{
    iNo++;    //value ekane vadhavlii
}
int main()
{
    int iValue=11;
    CallybyValue(iValue);

    printf("Value after function call: %d\n", iValue);

    return 0;
}