// Write a C++ program to reverse a given number
// using do-while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,digit,reverse=0;

    cout<<"Enter a number ::";
    cin>>n;

    do
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    while(n!=0);

    cout<<"Reverse = "<<reverse;

    getch();
}