#include<iostream>
using namespace std;

class Base 
{
    public:
    int i,j;
    void Fun()
    {cout<<"inside Base Fun\n";}
    virtual void Gun()
    {cout<<"inside Base Gun\n";}
    virtual void Sun()
    {cout<<"inside Base Sun\n";}
}; //8bytes

class Derived : public Base
{
    public:
        int x,y;
    void Fun()  //redefination of function Fun
    {cout<<"inside Derived Fun\n";}
    void Gun()   // redefination of function Gun
    {cout<<"inside Derived Gun\n";}
    virtual void Run()  //defination of function Run
    {cout<<"inside Derived Run\n";}
};
int main()
{
    cout<<"size of Base class is : "<<sizeof(Base)<<"\n";  //8bytes
    cout<<"size of Derived class is : "<<sizeof(Base)<<"\n"; //16bytes
    
    return 0;
}