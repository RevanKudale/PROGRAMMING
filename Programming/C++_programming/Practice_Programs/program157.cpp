#include <iostream>
using namespace std;
#pragma pack(1) 

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        ArrayX() //default constructor
        {

        }

        ArrayX(int X) //parameterised constructor
        {

        }

};

int main()
{
    ArrayX aobj1; //default la jannar
    ArrayX aobj2(5); //parameterised constructor madhe hee value madhe janar
    cout<<sizeof(aobj1)<<endl; 

    return 0;
}