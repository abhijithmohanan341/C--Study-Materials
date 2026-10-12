// Write a C++ program to print palindrome numbers between two ranges
// using nested for loops.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,i,temp,digit,rev,l1,l2,j;
    clrscr();

    cout<<"Enter Two Limits ::"<<endl;
    cin>>l1>>l2;

    for(j=l1;j<=l2;j++)
    {
        n=j;
        temp=n;
        rev=0;

        for(;n>0;n=n/10)
        {
            digit=n%10;
            rev=rev*10+digit;
        }

        if(temp==rev)
        {
            cout<<j<<" ";
        }
    }

    getch();
}
