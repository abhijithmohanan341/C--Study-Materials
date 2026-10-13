// Write a C++ program to merge two arrays into a single array.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], b[50], c[100];
    int n1, n2, i;

    clrscr();

    cout<<"Enter First Array Size :: ";
    cin>>n1;

    cout<<"Enter First Array Values\n";

    for(i=0; i<n1; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Second Array Size :: ";
    cin>>n2;

    cout<<"Enter Second Array Values\n";

    for(i=0; i<n2; i++)
    {
        cin>>b[i];
    }

    for(i=0; i<n1; i++)
    {
        c[i]=a[i];
    }

    for(i=0; i<n2; i++)
    {
        c[n1+i]=b[i];
    }

    cout<<"Merged Array :: ";

    for(i=0; i<n1+n2; i++)
    {
        cout<<c[i]<<" ";
    }

    getch();
}