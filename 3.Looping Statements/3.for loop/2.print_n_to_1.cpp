// Write a C++ program to print numbers from N to 1
// using for loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n;

    cout<<"Enter the value of n ::";
    cin>>n;

    for(i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }

    getch();
}