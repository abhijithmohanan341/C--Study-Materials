// Write a C++ program to separate palindrome and non-palindrome
// numbers into two different arrays.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[50], pal[50], nonpal[50];
    int n, i, temp, digit, rev, p=0, np=0;

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
        temp=a[i];
        rev=0;

        for(; temp>0; temp=temp/10)
        {
            digit=temp%10;
            rev=rev*10+digit;
        }

        if(a[i]>=0 && a[i]==rev)
        {
            pal[p]=a[i];
            p++;
        }
        else
        {
            nonpal[np]=a[i];
            np++;
        }
    }

    cout<<"Palindrome Array :: ";

    for(i=0; i<p; i++)
    {
        cout<<pal[i]<<" ";
    }

    cout<<"\nNon-Palindrome Array :: ";

    for(i=0; i<np; i++)
    {
        cout<<nonpal[i]<<" ";
    }

    getch();
}