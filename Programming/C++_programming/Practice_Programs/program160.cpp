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
    // Static Memory Allocation for Object 
    // ArrayX aobj1(5); 
   
    ArrayX *aobj1 = new ArrayX(5);

    delete aobj1;  // destructor was called this place at first place and the end main is specified in order to tell that destructor was called way before actual main ending
    cout<<"End of Main\n";

    return 0;
}