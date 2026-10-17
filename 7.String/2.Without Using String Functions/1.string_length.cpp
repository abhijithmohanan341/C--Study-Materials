
// QUESTION: DISPLAY A STRING AND FIND ITS LENGTH
// WITHOUT USING STRING FUNCTIONS

#include<iostream.h>
#include<conio.h>

void main()
{
    char str[50];
    int i, l = 0;

    clrscr();

    cout<<"Enter a string :: ";
    cin>>str;

    cout<<"String is "<<str<<"\n";

    for(i = 0; str[i] != '\0'; i++)
    {
        l++;
    }

    cout<<"String Length is "<<l;

    getch();
}

