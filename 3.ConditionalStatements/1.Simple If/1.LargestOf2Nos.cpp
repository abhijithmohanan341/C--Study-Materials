#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b;

    cout<<"Enter the value of a ::";
    cin>>a;

    cout<<"Enter the value of b ::";
    cin>>b;

    if(a>b)
    {
        cout<<"Largest = "<<a;
    }

    if(b>a)
    {
        cout<<"Largest = "<<b;
    }

    getch();
}