#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    if(n>0)
    {
        cout<<"Number is Positive";
    }
    else if(n<0)
    {
        cout<<"Number is Negative";
    }
    else
    {
        cout<<"Number is Zero";
    }

    getch();
}