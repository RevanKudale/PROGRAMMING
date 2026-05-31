#include <iostream>
using namespace std;

//INCAPSULATION
class   MARVELLOUS
{
        //Access specifier
        public:
        int no1, no2;  //characterstics
        void fun()  //behaviour
        {
                cout<<"Inside fun\n";     //behaviour
        }
        void gun()  //behaviour
        {
                cout<<"Inside gun\n";     //behaviour
        }
    };

int main()
{
    MARVELLOUS mobj1;    //object creation(instance of class)
    MARVELLOUS mobj2;    //object creation


    cout<<sizeof(mobj1)<<"\n";   //size of object //8
    cout<<sizeof(mobj2)<<"\n";   //size of object
    
    cout<<mobj1.no1<<"\n";   //accessing data member
    
    mobj1.fun();  //accessing member function
    mobj2.fun();  //accessing member function
    
    mobj1.gun();  //accessing member function
    mobj2.gun();  //accessing member function
    
    
    return 0;
} 
