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
    Base *bp = new Derived;  //upcasting
    bp->Fun();  //Base class function will be called because it is non-virtual
    bp->Gun();  //base gun
    bp->Sun(); //Derived sun
   // bp->Run();  //Base class pointer cannot access derived class function therefore //ERROR
    return 0;
}