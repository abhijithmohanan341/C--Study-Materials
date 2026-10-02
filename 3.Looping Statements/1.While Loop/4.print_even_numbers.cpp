// Write a C++ program to print all even numbers from 1 to N
// using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n;

    cout<<"Enter the value of n ::";
    cin>>n;

    i=1;

    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }

        i++;
    }

    getch();
}