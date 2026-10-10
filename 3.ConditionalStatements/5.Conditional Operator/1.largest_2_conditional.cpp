// Write a C++ program to find the largest of two numbers
// using the conditional operator.

// ----------Syntax------------

// condition ? expression1 : expression2;

#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b,largest;

    cout<<"Enter the value of a ::";
    cin>>a;

    cout<<"Enter the value of b ::";
    cin>>b;

    largest = (a>b) ? a : b;

    cout<<"Largest = "<<largest;

    getch();
}