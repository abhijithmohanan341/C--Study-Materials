
/* Write a C++ program to check whether a matrix is symmetric or not. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j,flag=1;

    clrscr();

    cout<<"Enter Number of Rows and Columns :: ";
    cin>>r>>c;

    if(r!=c)
    {
        cout<<"Symmetric Matrix Requires a Square Matrix";
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

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=a[j][i])
                {
                    flag=0;
                }
            }
        }

        if(flag==1)
        {
            cout<<"Symmetric Matrix";
        }
        else
        {
            cout<<"Not a Symmetric Matrix";
        }
    }

    getch();
}
