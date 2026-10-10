// Write a C++ program to find the smallest of two numbers
// using the conditional operator.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b,smallest;

    cout<<"Enter the value of a ::";
    cin>>a;

    cout<<"Enter the value of b ::";
    cin>>b;

    smallest = (a<b) ? a : b;

    cout<<"Smallest = "<<smallest;

    getch();
}