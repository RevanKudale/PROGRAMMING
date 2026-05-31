#include <iostream>
using namespace std;

//INCAPSULATION
class   MARVELLOUS
{
        //Access specifier (by default it is private)
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
    
    cout<<mobj1.no1<<"\n";   //accessing data member  //error: 'int MARVELLOUS::no1' is private within this context
    
    mobj1.fun();  //accessing member function         //error: 'void MARVELLOUS::fun()' is private within this context
    mobj2.fun();  //accessing member function         //error: 'void MARVELLOUS::fun()' is private within this context
    
    mobj1.gun();  //accessing member function         //error: 'void MARVELLOUS::gun()' is private within this context
    mobj2.gun();  //accessing member function         //error: 'void MARVELLOUS::gun()' is private within this context
    
    
    return 0;
} 
