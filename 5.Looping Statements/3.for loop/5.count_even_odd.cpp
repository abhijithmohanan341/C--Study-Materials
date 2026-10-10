// Write a C++ program to count the number of even and odd
// numbers from 1 to N using for loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,even=0,odd=0;

    cout<<"Enter the value of n ::";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Even Count = "<<even;
    cout<<"\nOdd Count = "<<odd;

    getch();
}