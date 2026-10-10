// Write a C++ program to check whether a number is
// even or odd using the conditional operator.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    (n%2==0) ? cout<<"Number is Even" : cout<<"Number is Odd";

    getch();
}