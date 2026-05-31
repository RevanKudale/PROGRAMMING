#include<stdio.h>

int no=11;  //global variable [DATA]

void fun()
{
    int i=51;         //LOCAL VARIABLE[STACK]
    printf("Inside fun : %d\n",i);    //51 
    printf("Inside fun : %d\n",no);   //11
}



int main ()
{
    int i= 21;            //LOCAL VARIABLE[STACK]

    printf("Inside main : %d\n",i);    //21
    printf("Inside main : %d\n",no);   //11

    fun();


    return 0;
}