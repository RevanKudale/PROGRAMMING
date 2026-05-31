#include <stdio.h>


void Display(int Arr[])                //looks like array but its a pointer

{
    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[4]);

}

int main()

{
    int Brr[5] = {10, 20, 30, 40, 50};
   
    Display(Brr);    //we can pass array name as argument to function because array name is the address of first element of array
    return 0;
}