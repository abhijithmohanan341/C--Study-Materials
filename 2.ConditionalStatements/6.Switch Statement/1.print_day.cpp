// Write a C++ program to read a number from 1 to 7
// and print the corresponding day using switch.


      /* -----Syntax Switch Staement-----
      
      switch(expression)
        {
            case value1:
                // statements
                break;

            case value2:
                // statements
                break;

            default:
                // statements
        }  */



#include<iostream.h>
#include<conio.h>

void main()
{
    int day;

    cout<<"Enter day number (1-7) ::";
    cin>>day;

    switch(day)
    {
        case 1:
            cout<<"Monday";
            break;

        case 2:
            cout<<"Tuesday";
            break;

        case 3:
            cout<<"Wednesday";
            break;

        case 4:
            cout<<"Thursday";
            break;

        case 5:
            cout<<"Friday";
            break;

        case 6:
            cout<<"Saturday";
            break;

        case 7:
            cout<<"Sunday";
            break;

        default:
            cout<<"Invalid Day";
    }

    getch();
}