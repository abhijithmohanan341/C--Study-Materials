
/* Write a C++ program to multiply two matrices. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2,i,j,k;

    clrscr();

    cout<<"Enter Rows and Columns of First Matrix :: ";
    cin>>r1>>c1;

    cout<<"Enter Rows and Columns of Second Matrix :: ";
    cin>>r2>>c2;

    if(c1!=r2)
    {
        cout<<"Matrix Multiplication Not Possible";
    }
    else
    {
        cout<<"Enter First Matrix Elements\n";

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter Second Matrix Elements\n";

        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;

                for(k=0;k<c1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }

        cout<<"Multiplication Matrix\n";

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

    getch();
}
