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
};

int main()
{
    ArrayX *aobj1 = new ArrayX(); //PARAMETERISED CONSTRUCTOR
    ArrayX *aobj2 = new ArrayX(15); // PARAMETERISED CONSTRUCTOR  

    //FUNCTION CALL
   
    delete aobj1;  
    delete aobj2;
   

    return 0;
}