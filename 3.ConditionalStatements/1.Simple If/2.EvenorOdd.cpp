#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    if(n%2==0)
    {
        cout<<"Number is Even";
    }

    if(n%2!=0)
    {
        cout<<"Number is Odd";
    }

    getch();
}