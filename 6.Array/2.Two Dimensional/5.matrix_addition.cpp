
/* Write a C++ program to add two matrices. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],sum[10][10];
    int r,c,i,j;

    clrscr();

    cout<<"Enter Number of Rows and Columns :: ";
    cin>>r>>c;

    cout<<"Enter First Matrix Elements\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter Second Matrix Elements\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Addition Matrix\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<sum[i][j]<<"\t";
        }
        cout<<"\n";
    }

    getch();
}
