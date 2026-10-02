// Write a C++ program to check whether a student is eligible
// for a course using nested if.
// Mark should be 50 or above and attendance should be 75% or above.

#include<iostream.h>
#include<conio.h>

void main()
{
    int mark,attendance;

    cout<<"Enter the mark ::";
    cin>>mark;

    cout<<"Enter the attendance percentage ::";
    cin>>attendance;

    if(mark>=50)
    {
        if(attendance>=75)
        {
            cout<<"Eligible";
        }
        else
        {
            cout<<"Not Eligible";
        }
    }
    else
    {
        cout<<"Not Eligible";
    }

    getch();
}