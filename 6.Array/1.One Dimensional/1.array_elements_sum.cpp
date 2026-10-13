// Write a C++ program to find the sum of array elements
// using a 1D array.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], n, i, sum = 0;

    clrscr();

    cout<<"Enter Array Size :: ";
    cin>>n;

    cout<<"Enter Array Values\n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"\nElements\tPosition\n";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t\t"<<i<<"\n";
        sum = sum + a[i];
    }

    cout<<"\nSum = "<<sum;

    getch();
}