
/* Write a C++ program to print diagonal elements and find their sum. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j,sum=0;

    clrscr();

    cout<<"Enter Number of Rows and Columns :: ";
    cin>>r>>c;

    if(r!=c)
    {
        cout<<"Diagonal Sum Requires a Square Matrix";
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

        cout<<"Diagonal Elements :: ";

        for(i=0;i<r;i++)
        {
            cout<<a[i][i]<<" ";
            sum=sum+a[i][i];
        }

        cout<<"\nSum of Diagonal Elements = "<<sum;
    }

    getch();
}
