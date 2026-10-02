// Write a C++ program to check whether a given year
// is a leap year or not using if-else.

#include<iostream.h>
#include<conio.h>

void main()
{
    int year;

    cout<<"Enter a year ::";
    cin>>year;

    if(year%400==0 || (year%4==0 && year%100!=0))
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not a Leap Year";
    }

    getch();
}