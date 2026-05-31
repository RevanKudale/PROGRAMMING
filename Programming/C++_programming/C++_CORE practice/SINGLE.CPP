#include<iostream>
using namespace std;

class Base
{
     public:
      int i,j;
       
        Base()
        {
            cout<<"inside base constructor\n";
            i = 0;
            j = 0; 
        }

        ~Base()
        {
            cout<<"inside base destructor\n";
        }

        void fun()     //function of base class//whenever someone calls fun of derived class then fun of base class will be called
        {
            cout<<"inside base fun\n";
        }
};


class derived:public Base
{
};

int main()
{
    Base bobj();

   // derived dobj;


    return 0;
}