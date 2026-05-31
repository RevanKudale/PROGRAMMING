#include <stdio.h>


void Display(int Arr[])                //looks like array but its a pointer

{
    printf("%d\n", *Arr);

    Arr++;

    printf("%d\n", *Arr);

    Arr++;
    
    printf("%d\n", *Arr);

}

int main()

{
    int Brr[5] = {10, 20, 30, 40, 50};
   
    Display(Brr);    //we can pass array name as argument to function because array name is the address of first element of array
    return 0;
}