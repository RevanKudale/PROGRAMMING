#include <iostream>
using namespace std;

//INCAPSULATION
class   MARVELLOUS
{
        //Access specifier
        public:
        int no1, no2;  //characterstics
      
        //DEFAULT CONSTRUCTOR
        MARVELLOUS()   
        {
           cout<<"Inside default constructor\n";
           no1 = 0;
           no2 = 0;
        }

        //PARAMETERISED CONSTRUCTOR
        MARVELLOUS(int A, int B)   
        {       
           cout<<"Inside parameterised constructor\n";
           no1 = A;
           no2 = B;
        }

        //COPY CONSTRUCTOR
        MARVELLOUS(MARVELLOUS &ref)
        {
           cout<<"Inside copy constructor\n";
           no1 = ref.no1;
           no2 = ref.no2;
        }

        ~MARVELLOUS()   //DESTRUCTOR
        {
           cout<<"Inside destructor\n";
        }
    };

int main()
{
        cout<<"Inside main function\n";

         MARVELLOUS mobj1;          //dfault constructor 
         MARVELLOUS mobj2(11, 21);  //parameterised constructor 
         MARVELLOUS mobj3(mobj2);    //copy constructor
          
        cout<<"end of main function\n";
    return 0;
} //all destructors will be called 
