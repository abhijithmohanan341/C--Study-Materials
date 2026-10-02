// Write a C++ program to find the largest of two numbers
// using if-else.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b;

    cout<<"Enter the value of a ::";
    cin>>a;

    cout<<"Enter the value of b ::";
    cin>>b;

    if(a>b)
    {
        cout<<"Largest = "<<a;
    }
    else
    {
        cout<<"Largest = "<<b;
    }

    getch();
}