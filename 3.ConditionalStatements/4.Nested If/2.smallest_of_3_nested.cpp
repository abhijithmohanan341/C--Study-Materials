// Write a C++ program to find the smallest of three numbers
// using nested if.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b,c;

    cout<<"Enter the value of a ::";
    cin>>a;

    cout<<"Enter the value of b ::";
    cin>>b;

    cout<<"Enter the value of c ::";
    cin>>c;

    if(a<b)
    {
        if(a<c)
        {
            cout<<"Smallest = "<<a;
        }
        else
        {
            cout<<"Smallest = "<<c;
        }
    }
    else
    {
        if(b<c)
        {
            cout<<"Smallest = "<<b;
        }
        else
        {
            cout<<"Smallest = "<<c;
        }
    }

    getch();
}