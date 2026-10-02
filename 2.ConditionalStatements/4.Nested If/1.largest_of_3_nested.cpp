// Write a C++ program to find the largest of three numbers
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

    if(a>b)
    {
        if(a>c)
        {
            cout<<"Largest = "<<a;
        }
        else
        {
            cout<<"Largest = "<<c;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"Largest = "<<b;
        }
        else
        {
            cout<<"Largest = "<<c;
        }
    }

    getch();
}