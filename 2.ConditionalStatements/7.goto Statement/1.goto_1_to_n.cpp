// Write a program to print 1 to n using goto statement

#include<iostream.h>
#include<conio.h>

void main()
{
    int i=1, n;

    clrscr();

    cout<<"Enter n: ";
    cin>>n;

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
    cout<<i<<" ";
    i++;
    goto L3;

L2:
    getch();
}