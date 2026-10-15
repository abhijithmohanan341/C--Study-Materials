
/* Write a C++ program to print upper and lower triangular matrices. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j;

    clrscr();

    cout<<"Enter Number of Rows and Columns :: ";
    cin>>r>>c;

    if(r!=c)
    {
        cout<<"Triangular Matrix Requires a Square Matrix";
    }
    else
    {
        cout<<"Enter Matrix Elements\n";

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"\nUpper Triangular Matrix\n";

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i<=j)
                {
                    cout<<a[i][j]<<"\t";
                }
                else
                {
                    cout<<"0\t";
                }
            }
            cout<<"\n";
        }

        cout<<"\nLower Triangular Matrix\n";

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>=j)
                {
                    cout<<a[i][j]<<"\t";
                }
                else
                {
                    cout<<"0\t";
                }
            }
            cout<<"\n";
        }
    }

    getch();
}
