// Write a C++ program to check whether a number is
// positive or negative using the conditional operator.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    (n>=0) ? cout<<"Number is Positive" : cout<<"Number is Negative";

    getch();
}