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
    fun();     //error fun is not declared in this scope
    std::cout<<"JAY GANESH...\n";

    return 0;
}