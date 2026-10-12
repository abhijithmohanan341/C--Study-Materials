// Write a C++ program to print strong numbers between two ranges
// using nested for loops.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,i,temp,digit,fact,sum,l1,l2,j;
    clrscr();

    cout<<"Enter Two Limits ::"<<endl;
    cin>>l1>>l2;

    for(j=l1;j<=l2;j++)
    {
        n=j;
        temp=n;
        sum=0;

        for(;n>0;n=n/10)
        {
            digit=n%10;
            fact=1;

            for(i=1;i<=digit;i++)
            {
                fact=fact*i;
            }

            sum=sum+fact;
        }

        if(temp==sum)
        {
            cout<<j<<" ";
        }
    }

    getch();
}
