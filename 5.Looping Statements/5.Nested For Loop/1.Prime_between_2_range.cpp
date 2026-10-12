// Write a C++ program to print prime numbers between two ranges
// using nested for loops.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,i,count,l1,l2,j;
    clrscr();

    cout<<"Enter Two Limits ::"<<endl;
    cin>>l1>>l2;

    for(j=l1;j<=l2;j++)
    {
        n=j;
        count=0;

        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }

        if(count==2)
        {
            cout<<j<<" ";
        }
    }

    getch();
}
