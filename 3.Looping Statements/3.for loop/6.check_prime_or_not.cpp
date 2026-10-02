// Write a C++ program to check whether a given number
// is prime or not using for loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,count=0;

    cout<<"Enter a number ::";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a Prime Number";
    }

    getch();
}