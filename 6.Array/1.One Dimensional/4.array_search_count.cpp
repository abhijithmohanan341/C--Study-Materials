// Write a C++ program to search an element in a 1D array
// and count the number of times it occurs.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], n, i, search, count=0;

    clrscr();

    cout<<"Enter Array Size :: ";
    cin>>n;

    cout<<"Enter Array Values\n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Element to Search :: ";
    cin>>search;

    for(i=0; i<n; i++)
    {
        if(a[i]==search)
        {
            count++;
        }
    }

    if(count>0)
    {
        cout<<"Element Found";
        cout<<"\nNumber of Occurrences = "<<count;
    }
    else
    {
        cout<<"Element Not Found";
    }

    getch();
}