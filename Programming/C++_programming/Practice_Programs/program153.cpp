#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

};

int main()
{
    ArrayX aobj;
    cout<<sizeof(aobj)<<endl; //16 bytes (4 bytes for pointer + 4 bytes for int + padding)

    return 0;
}