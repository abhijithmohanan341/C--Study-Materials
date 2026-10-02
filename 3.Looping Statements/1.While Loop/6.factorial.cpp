// Write a C++ program to find the factorial of a number
// using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,fact=1;

    cout<<"Enter the value of n ::";
    cin>>n;

    i=1;

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    cout<<"Factorial = "<<fact;

    getch();
}