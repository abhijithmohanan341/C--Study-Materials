// Write a C++ program to print perfect numbers between two ranges
// using nested for loops.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,i,sum,l1,l2,j;
    clrscr();

    cout<<"Enter Two Limits ::"<<endl;
    cin>>l1>>l2;

    for(j=l1;j<=l2;j++)
    {
        n=j;
        sum=0;

        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }

        if(n>0 && sum==n)
        {
            cout<<j<<" ";
        }
    }

    getch();
}
