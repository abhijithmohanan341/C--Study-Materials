// QUESTION: CHECK WHETHER A STRING IS PALINDROME OR NOT
// WITHOUT USING STRING FUNCTIONS

#include<iostream.h>
#include<conio.h>

void main()
{
    char str1[50], str2[50];
    int i, j = 0, l = 0, flag = 0;

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

    cout<<"Reverse String is "<<str2<<"\n";

    for(i = 0, j = 0; str1[i] != '\0'; i++, j++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"String is Palindrome";
    }
    else
    {
        cout<<"String is Not Palindrome";
    }

    getch();
}

