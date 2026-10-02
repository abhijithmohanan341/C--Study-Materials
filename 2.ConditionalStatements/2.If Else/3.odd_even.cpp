// Write a C++ program to check whether a number
// is odd or even using if-else.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    if(n%2==0)
    {
        cout<<"Number is Even";
    }
    else
    {
        cout<<"Number is Odd";
    }

    getch();
}