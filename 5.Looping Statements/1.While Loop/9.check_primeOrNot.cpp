// Write a C++ program to check whether a given number
// is prime or not using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,i=1,count=0;

    cout<<"Enter a number ::";
    cin>>n;

    while(i<=n)
    {
        if(n%i==0)
        {
            count=count+1;
        }

        i++;
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