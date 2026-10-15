
/* Write a C++ program to read a matrix,print it and find its transpose. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j;

    clrscr();

    cout<<"Enter Number of Rows and Columns :: ";
    cin>>r>>c;

    cout<<"Enter Matrix Elements\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nMatrix\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"\nTranspose Matrix\n";

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<"\n";
    }

    getch();
}
