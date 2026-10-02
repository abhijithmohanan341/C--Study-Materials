// Write a C++ program to print numbers from 1 to N
// using do-while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n;

    cout<<"Enter the value of n ::";
    cin>>n;

    i=1;

    do
    {
        cout<<i<<" ";
        i++;
    }
    while(i<=n);

    getch();
}