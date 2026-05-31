#include<iostream>
using namespace std;

class Base 
{
    public:
    int i,j;
    void Fun() //1000
    {cout<<"inside Base Fun\n";}
    virtual void Gun() //2000
    {cout<<"inside Base Gun\n";}
    virtual void Sun() //3000
    {cout<<"inside Base Sun\n";}
}; //8bytes

class Derived : public Base
{
    public:
        int x,y;
    void Fun()  //4000
    {cout<<"inside Derived Fun\n";}
    void Gun()   //5000
    {cout<<"inside Derived Gun\n";}
    virtual void Run()  //6000 
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