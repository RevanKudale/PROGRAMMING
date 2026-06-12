#include <iostream>
using namespace std;
#pragma pack(1) 

class ArrayX
{
    private:
        int *Arr;
        int iSize;       

    public:
        ArrayX(int X)
        {
            iSize = X;           
            Arr = new int[iSize];
        } 

        ~ArrayX()
        {
            delete[]Arr;          
        }
};

int main()
{
     ArrayX *aobj1 = new ArrayX(5);

    //LOGIC(FUNCTIONCALL)
    cout<<aobj1->iSize<<"\n";

    aobj1->iSize = 0;   //ISSUE  //ERROR 
    aobj->Arr = NULL; //ISSUE   // ERRROR

    delete aobj1;  
   

    return 0;
}