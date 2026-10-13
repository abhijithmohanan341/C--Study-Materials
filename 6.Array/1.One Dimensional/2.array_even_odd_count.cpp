// Write a C++ program to print even and odd numbers
// and count them using a 1D array.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], n, i, even=0, odd=0;

    clrscr();

    cout<<"Enter Array Size :: ";
    cin>>n;

    cout<<"Enter Array Values\n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Even Numbers :: ";

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ";
            even++;
        }
    }

    cout<<"\nOdd Numbers :: ";

    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<" ";
            odd++;
        }
    }

    cout<<"\nEven Count = "<<even;
    cout<<"\nOdd Count = "<<odd;

    getch();
}