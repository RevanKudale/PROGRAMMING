#include <stdio.h>

int main()
{
    int Arr[7];

    Arr[0] = 10;
    Arr[3] = 20;
    Arr[6] = 30;

   printf("%d\n", sizeof(Arr)); // 28 bytes (7 integers * 4 bytes each)


   printf("%d\n",Arr[0]); // 10
   printf("%d\n",Arr[3]); // 20
   printf("%d\n",Arr[6]); // 30

   printf("%d\n",Arr[2]); // 30
   printf("%d\n",Arr[5]); // 30

    return 0;
}