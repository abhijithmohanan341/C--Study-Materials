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

    if(a<b && a<c)
    {
        cout<<"Smallest = "<<a;
    }
    else if(b<a && b<c)
    {
        cout<<"Smallest = "<<b;
    }
    else
    {
        cout<<"Smallest = "<<c;
    }

    getch();
}