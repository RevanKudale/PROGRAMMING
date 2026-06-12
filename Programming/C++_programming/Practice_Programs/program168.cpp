#include <iostream>
using namespace std;
#pragma pack(1) 

class ArrayX
{
    private:
        int *Arr;
        int iSize;       

    public:
        //parameterised constructor with default arguement
        ArrayX(int X = 5)
        {
            iSize = X;           
            Arr = new int[iSize];
        } 

        ~ArrayX()
        {
            delete[]Arr;          
        }
    void Accept()
    {
        cout<<"Enter the Elements:\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt> iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Elements of the array are :\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt> iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<endl;
        }
    }
};

int main()
{
    ArrayX *aobj = NULL;
    int iLength = 0;
    cout<<"Enter the Number of Elements: \n";
    cin>>iLength;
    aobj = new ArrayX(iLength);
    aobj->Accept();
    aobj->Display();

    
   
    delete aobj;  
    
   

    return 0;
}