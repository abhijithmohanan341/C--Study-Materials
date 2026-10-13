// Write a C++ program to find the largest and smallest
// elements in a 1D array.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], n, i, largest, smallest;

    clrscr();

    cout<<"Enter Array Size :: ";
    cin>>n;

    cout<<"Enter Array Values\n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    largest=a[0];
    smallest=a[0];

    for(i=1; i<n; i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }

        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }

    cout<<"Largest Element = "<<largest;
    cout<<"\nSmallest Element = "<<smallest;

    getch();
}