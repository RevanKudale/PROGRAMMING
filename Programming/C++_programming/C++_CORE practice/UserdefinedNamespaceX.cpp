#include <iostream>
namespace Marvellous                   //userdefined namespace
{
    int no=11;

    void fun()
    {
        std::cout<<"Inside fun of Marvellous namespace\n";
    }
}

using namespace Marvellous;          //using directive
int main()
{   
    fun();                         //directly call fun() without using scope resolution operator
    std::cout<<"JAY GANESH...\n";

    return 0;
}