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
            iSize = 5;           
            Arr = new int[iSize];
        } 

        ~ArrayX()
        {
            delete[]Arr;          
        }
};

int main()
{
    ArrayX *aobj1 = new ArrayX(); //DEFAULT CONSTRUCTOR CHA CALL JANARE
    ArrayX *aobj2 = new ArrayX(5); // PARAMETERISED CONSTRUCTOR CHA CALL 

    //FUNCTION CALL
   
    delete aobj1;  
    delete aobj2;
   

    return 0;
}