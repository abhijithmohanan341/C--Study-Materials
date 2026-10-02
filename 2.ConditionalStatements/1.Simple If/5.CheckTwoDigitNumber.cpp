#include<iostream.h>
#include<conio.h>

void main()
{
    int n;

    cout<<"Enter a number ::";
    cin>>n;

    if(n>=10 && n<=99)
    {
        cout<<"Number is a Two Digit Number";
    }

    if(n<10 || n>99)
    {
        cout<<"Number is Not a Two Digit Number";
    }

    getch();
}