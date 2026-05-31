#include <iostream>
namespace Marvellous                   //userdefined namespace
{
    int no=11;

    void fun()
    {
        std::cout<<"Inside fun of Marvellous namespace\n";
    }
}

int main()
{   
    Marvellous::fun();                         //calling using scope resolution operator
    std::cout<<"JAY GANESH...\n";

    return 0;
}