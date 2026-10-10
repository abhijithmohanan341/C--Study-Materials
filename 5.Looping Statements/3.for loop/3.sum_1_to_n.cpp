// Write a C++ program to find the sum of numbers from 1 to N
// using for loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,sum=0;

    cout<<"Enter the value of n ::";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"Sum = "<<sum;

    getch();
}