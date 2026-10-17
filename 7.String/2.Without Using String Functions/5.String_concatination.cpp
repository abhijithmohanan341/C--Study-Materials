// QUESTION: CONCATENATE TWO STRINGS
// WITHOUT USING STRING FUNCTIONS

#include<iostream.h>
#include<conio.h>

void main()
{
    char str1[100], str2[50];
    int i, j, l = 0;

    clrscr();

    cout<<"Enter String-1 :: ";
    cin>>str1;

    cout<<"Enter String-2 :: ";
    cin>>str2;

    cout<<"String-1 is "<<str1<<"\n";
    cout<<"String-2 is "<<str2<<"\n";

    for(i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }

    for(i = l, j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    cout<<"Concatenated String is "<<str1<<"\n";

    getch();
}
