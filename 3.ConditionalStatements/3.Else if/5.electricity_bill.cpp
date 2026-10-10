// Write a C++ program to calculate the electricity bill
// based on the units consumed.
// 0-100 units    : Rs.2 per unit
// 101-200 units  : Rs.3 per unit
// 201-300 units  : Rs.5 per unit
// Above 300      : Rs.7 per unit

#include<iostream.h>
#include<conio.h>

void main()
{
    int units;
    float bill;

    cout<<"Enter the units consumed ::";
    cin>>units;

    if(units<=100)
    {
        bill=units*2;
    }
    else if(units<=200)
    {
        bill=(100*2)+((units-100)*3);
    }
    else if(units<=300)
    {
        bill=(100*2)+(100*3)+((units-200)*5);
    }
    else
    {
        bill=(100*2)+(100*3)+(100*5)+((units-300)*7);
    }

    cout<<"Electricity Bill = Rs. "<<bill;

    getch();
}