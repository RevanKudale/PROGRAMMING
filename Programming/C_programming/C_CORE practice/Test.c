//Demonstration of preprocessor directives in C

/*
pre placement activity
22april 2026
*/
#include <stdio.h>
#define PI 3.14 // defining a constant value for pi
int main()
{
    //Area of circle 

    float Area=0.0f;
    Area = 10.5f * PI; // using the defined constant PI
    printf("Area of the circle with radius 10.5 is: %.f\n", Area);

    return 0;
}