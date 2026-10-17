// QUESTION: COPY ONE STRING INTO ANOTHER
// WITHOUT USING STRING FUNCTIONS

#include<iostream.h>
#include<conio.h>

void main()
{
    char str1[50], str2[50];
    int i;

    clrscr();

    cout<<"Enter a string :: ";
    cin>>str1;

    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    cout<<"Original String is "<<str1<<"\n";
    cout<<"Copied String is "<<str2;

    getch();
}

