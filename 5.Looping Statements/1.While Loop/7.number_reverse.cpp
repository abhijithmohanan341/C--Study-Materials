// Write a C++ program to reverse a given number
// using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,rem,reverse=0;

    cout<<"Enter a number ::";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }

    cout<<"Reverse = "<<reverse;

    getch();
}