// Write a C++ program to count positive, negative and zero
// elements using a 1D array.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], n, i;
    int pos=0, neg=0, zero=0;

    clrscr();

    cout<<"Enter Array Size :: ";
    cin>>n;

    cout<<"Enter Array Values\n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

    cout<<"Positive Count = "<<pos;
    cout<<"\nNegative Count = "<<neg;
    cout<<"\nZero Count = "<<zero;

    getch();
}