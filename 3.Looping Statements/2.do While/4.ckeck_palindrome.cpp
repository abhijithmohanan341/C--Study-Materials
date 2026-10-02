// Write a C++ program to check whether a given number
// is palindrome or not using do-while loop.

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,temp,digit,reverse=0;

    cout<<"Enter a number ::";
    cin>>n;

    temp=n;

    do
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    while(n!=0);

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