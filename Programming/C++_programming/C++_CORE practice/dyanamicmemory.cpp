#include<iostream>
using namespace std;

int main()
{

    int size =0;
    float *marks = NULL;
    int i=0;

    cout<<"enter your number of elements:  \n ";
    cin>>size;

    //dyanamic memory allocation
    marks=new float[size];


    cout<<("enter your marks:  \n");

    //iteration
    for(i=0; i<size; i++)
    {
        cin>>  marks[i];

    }
    cout<<"entered marks are:  \n";

    for ( i = 0; i < size; i++)
    {
        cout<<marks[i]<<"\n";

    }
    
delete[]marks;

return  0;







}