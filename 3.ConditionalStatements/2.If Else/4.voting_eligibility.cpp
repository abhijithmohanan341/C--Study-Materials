// Write a C++ program to check whether a person is eligible
// to vote based on age using if-else.
// A person is eligible to vote if age is 18 or above.

#include<iostream.h>
#include<conio.h>

void main()
{
    int age;

    cout<<"Enter your age ::";
    cin>>age;

    if(age>=18)
    {
        cout<<"Eligible to Vote";
    }
    else
    {
        cout<<"Not Eligible to Vote";
    }

    getch();
}