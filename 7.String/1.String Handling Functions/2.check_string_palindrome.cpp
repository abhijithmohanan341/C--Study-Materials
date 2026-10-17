
// PROGRAM: CHECK WHETHER A STRING IS PALINDROME
// USING STRING FUNCTIONS

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str1[50], rev[50];

    clrscr();

    cout<<"Enter a string :: ";
    cin>>str1;

    strcpy(rev, str1);

    strrev(rev);

    cout<<"Reverse String is "<<rev<<"\n";

    if(strcmp(str1, rev) == 0)
    {
        cout<<"String is Palindrome";
    }
    else
    {
        cout<<"String is Not Palindrome";
    }

    getch();
}
