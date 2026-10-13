// Write a C++ program to sort an array in ascending
// and descending order.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], n, i, j, temp;

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
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Ascending Order :: ";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nDescending Order :: ";

    for(i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }

    getch();
}