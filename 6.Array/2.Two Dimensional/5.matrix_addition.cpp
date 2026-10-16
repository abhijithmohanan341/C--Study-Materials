/* Write a C++ program to add two matrices.
   Check whether rows and columns are equal. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],sum[10][10];
    int r1,c1,r2,c2,i,j;

    clrscr();

    cout<<"Enter Rows and Columns in First Matrix :: ";
    cin>>r1>>c1;

    cout<<"Enter First Matrix Elements\n";

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter Rows and Columns in Second Matrix :: ";
    cin>>r2>>c2;

    cout<<"Enter Second Matrix Elements\n";

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

    if(r1 == r2 && c1 == c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }

        cout<<"Addition Matrix\n";

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<sum[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"Rows and Columns Are Not Equal\n";
        cout<<"Matrix Addition Not Possible";
    }

    getch();
}