// Write a C++ program to separate even and odd numbers
// into two different arrays.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], even[50], odd[50];
    int n, i, e=0, o=0;

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
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }

    cout<<"Even Array :: ";

    for(i=0; i<e; i++)
    {
        cout<<even[i]<<" ";
    }

    cout<<"\nOdd Array :: ";

    for(i=0; i<o; i++)
    {
        cout<<odd[i]<<" ";
    }

    getch();
}