#include <iostream>
using namespace std;
#pragma pack(1) 

class ArrayX
{
    public:
        int *Arr;
        int iSize;
       

        ArrayX(int X) //parameterised constructor
        {
            cout<<"inside Constructor\n";
            iSize = X;            //characterstics initialisation 
            Arr = new int[iSize]; //resource allocation 
        }

        //destructor
        ~ArrayX()
        {
            cout<<"inside Destructor\n";
            delete[]Arr;            //Resources deallocation
        }
};

int main()
{
    ArrayX aobj1(5); 
   
    

    return 0;
}