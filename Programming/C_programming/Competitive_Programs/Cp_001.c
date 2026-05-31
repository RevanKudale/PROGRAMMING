/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
//                      PROGRAM TO DIVIDE TWO NUMBERS                              //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Divide(int iNo1, int iNo2)
{
    int Ans = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    Ans = iNo1 / iNo2;
    return Ans;
}
int main()
{
    int iValue =15 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue, iValue2);
    printgf("Division is : %d\n", iRet);
    return 0;
}