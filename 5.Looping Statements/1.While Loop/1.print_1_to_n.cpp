// Write a C++ program to print numbers from 1 to N
// using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i=1,n;

    cout<<"Enter the value of n ::";
    cin>>n;

    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }

    getch();
}