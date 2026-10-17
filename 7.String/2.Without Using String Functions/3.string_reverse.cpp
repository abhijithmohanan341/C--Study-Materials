
// QUESTION: REVERSE A STRING
// WITHOUT USING STRING FUNCTIONS

#include<iostream.h>
#include<conio.h>

void main()
{
    char str1[50], str2[50];
    int i, j = 0, l = 0;

    clrscr();

    cout<<"Enter a string :: ";
    cin>>str1;

    cout<<"Original String is "<<str1<<"\n";

    for(i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }

    for(i = l - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }

    str2[j] = '\0';

    cout<<"String Reverse is "<<str2<<"\n";

    getch();
}
