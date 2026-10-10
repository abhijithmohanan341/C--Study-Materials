// Write a C++ program to print numbers from N to 1
// using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n;

    cout<<"Enter the value of n ::";
    cin>>n;

    i=n;

    while(i>=1)
    {
        cout<<i<<" ";
        i--;
    }

    getch();
}