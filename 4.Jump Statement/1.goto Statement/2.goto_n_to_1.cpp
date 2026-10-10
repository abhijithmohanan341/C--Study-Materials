// Write a program to print n to 1 using goto statement


#include<iostream.h>
#include<conio.h>

void main()
{
    int i, n;

    clrscr();

    cout<<"Enter the value of n: ";
    cin>>n;

    i=n;

L3:
    if(i>=1)
    {
        goto L1;
    }
    else
    {
        goto L2;
    }

L1:
    cout<<i<<" ";
    i--;
    goto L3;

L2:
    getch();
}