
/* Write a C++ program to search an element in a matrix and count the number of times it occurs. */

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],r,c,i,j,search,count=0;

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

    cout<<"Enter Element to Search :: ";
    cin>>search;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==search)
            {
                count++;
            }
        }
    }

    if(count>0)
    {
        cout<<"Element Found";
        cout<<"\nNumber of Occurrences = "<<count;
    }
    else
    {
        cout<<"Element Not Found";
    }

    getch();
}
