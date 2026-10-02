// Write a C++ program to print the multiplication table
// of a given number from 1 to 10 using for loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n;

    cout<<"Enter the number ::";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
    }

    getch();
}