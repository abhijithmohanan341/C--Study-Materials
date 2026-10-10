#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    if(n%5==0)
    {
        cout<<"Number is Divisible by 5";
    }

    if(n%5!=0)
    {
        cout<<"Number is Not Divisible by 5";
    }

    getch();
}