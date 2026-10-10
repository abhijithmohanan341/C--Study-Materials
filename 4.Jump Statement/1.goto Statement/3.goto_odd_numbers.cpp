// Write a C++ program to print all odd numbers from 1 to N using the goto statement.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i, n;

    clrscr();

    cout<<"Enter n: ";
    cin>>n;

    i=1;

L3:
    if(i<=n)
    {
        goto L1;
    }
    else
    {
        goto L2;
    }

L1:
    if(i%2!=0)
    {
        cout<<i<<" ";
    }

    i++;
    goto L3;

L2:
    getch();
}