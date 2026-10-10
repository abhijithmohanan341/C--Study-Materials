// Write a C++ program to check whether a number
// is positive or negative using if-else.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    if(n>=0)
    {
        cout<<"Number is Positive";
    }
    else
    {
        cout<<"Number is Negative";
    }

    getch();
}