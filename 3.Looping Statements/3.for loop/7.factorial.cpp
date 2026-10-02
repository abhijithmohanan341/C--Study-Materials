// Write a C++ program to find the factorial of a number
// using for loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,fact=1;

    cout<<"Enter the value of n ::";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    cout<<"Factorial = "<<fact;

    getch();
}