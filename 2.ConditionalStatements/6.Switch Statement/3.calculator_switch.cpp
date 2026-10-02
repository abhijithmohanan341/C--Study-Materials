// Write a C++ program to perform basic arithmetic operations
// using switch.

#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b,choice;

    cout<<"Enter the value of a ::";
    cin>>a;

    cout<<"Enter the value of b ::";
    cin>>b;

    cout<<"\n1. Addition";
    cout<<"\n2. Subtraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";

    cout<<"\nEnter your choice ::";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Result = "<<a+b;
            break;

        case 2:
            cout<<"Result = "<<a-b;
            break;

        case 3:
            cout<<"Result = "<<a*b;
            break;

        case 4:
            cout<<"Result = "<<a/b;
            break;

        default:
            cout<<"Invalid Choice";
    }

    getch();
}