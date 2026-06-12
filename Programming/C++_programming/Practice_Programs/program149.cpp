#include <iostream>
using namespace std;

int main()
{
    int *Brr = NULL;

    int iLength = 0, iCnt = 0;

    cout<<"Enter the number of elements: \n";
    cin>>iLength;

    Brr = new int[iLength]; //NEW OPEARTOR CALLS THE MALLOC FOR MEMORY ALLOCATION

    cout<<"Enter the Elements: \n";
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt]; //INPUT GHENYA SATHI FOR LOOP
    }
    cout<<"Element of the Array are: \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    delete[]Brr; //deallocating the memory in cpp is little diff 
    return 0;
}