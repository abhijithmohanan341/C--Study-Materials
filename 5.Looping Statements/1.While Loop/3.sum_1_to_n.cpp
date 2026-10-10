// Write a C++ program to find the sum of numbers from 1 to N
// using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,sum=0;

    cout<<"Enter the value of n ::";
    cin>>n;

    i=1;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }

    cout<<"Sum = "<<sum;

    getch();
}