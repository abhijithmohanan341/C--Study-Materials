// Write a C++ program using do-while and switch statement
// Choice 1: Check Positive, Negative or Zero
// Choice 2: Check Even or Odd

#include<iostream.h>
#include<conio.h>

void main()
{
    int n, choice;
    char con;

    cout<<"Enter the number :: ";
    cin>>n;

    do
    {
        cout<<"\nOur Choices\n";
        cout<<"1. Positive, Negative or Zero\n";
        cout<<"2. Even or Odd\n";

        cout<<"Enter Your Choice :: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(n>0)
                {
                    cout<<"Positive Number";
                }
                else if(n<0)
                {
                    cout<<"Negative Number";
                }
                else
                {
                    cout<<"Zero";
                }
                break;

            case 2:
                if(n%2==0)
                {
                    cout<<"Even Number";
                }
                else
                {
                    cout<<"Odd Number";
                }
                break;

            default:
                cout<<"Invalid Choice";
        }

        cout<<"\nDo you want to continue? (Y/N) :: ";
        cin>>con;

    }while(con=='Y' || con=='y');

    getch();
}