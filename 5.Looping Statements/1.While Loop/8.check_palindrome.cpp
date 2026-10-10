// Write a C++ program to check whether a given number
// is palindrome or not using while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,temp,degit,reverse=0;

    cout<<"Enter a number ::";
    cin>>n;

    temp=n;

    while(n!=0)
    {
        degit=n%10;
        reverse=reverse*10+degit;
        n=n/10;
    }

    if(temp==reverse)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }

    getch();
}