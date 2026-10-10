// Write a C++ program to find the sum of numbers from 1 to n using the goto statement.




#include<iostream.h>
#include<conio.h>

void main()
{
    int i, n, sum=0;

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
    sum=sum+i;
    i++;
    goto L3;

L2:
    cout<<"Sum = "<<sum;

    getch();
}