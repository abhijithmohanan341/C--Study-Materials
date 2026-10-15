
/* Write a C++ program to check whether all diagonal elements of a square matrix are zero or not. */

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
        cout<<"Not a Square Matrix";
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
            if(a[i][i]!=0)
            {
                flag=0;
            }
        }

        if(flag==1)
        {
            cout<<"All Diagonal Elements Are Zero";
        }
        else
        {
            cout<<"All Diagonal Elements Are Not Zero";
        }
    }

    getch();
}
