// PROGRAM: STRING HANDLING FUNCTIONS

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
    // VARIABLE DECLARATION

    char str1[100], str2[100];
    int l;

    clrscr();

    // 1. READING AND DISPLAYING A STRING

    cout<<"Enter a string :: ";
    cin>>str1;

    cout<<"String is "<<str1<<"\n";

    // 2. FINDING THE LENGTH OF A STRING

    l = strlen(str1);

    cout<<"String Length is "<<l<<"\n";

    // 3. COPYING A STRING

    strcpy(str2, str1);

    cout<<"Copied String is "<<str2<<"\n";

    // 4. REVERSING A STRING

    strrev(str1);

    cout<<"Reverse String is "<<str1<<"\n";

    // 5. COMPARING TWO STRINGS

    cout<<"\nEnter String-1 :: ";
    cin>>str1;

    cout<<"Enter String-2 :: ";
    cin>>str2;

    if(strcmp(str1, str2) == 0)
    {
        cout<<"Strings Are Equal\n";
    }
    else
    {
        cout<<"Strings Are Not Equal\n";
    }

    // 6. CONCATENATING TWO STRINGS

    cout<<"\nEnter String-1 :: ";
    cin>>str1;

    cout<<"Enter String-2 :: ";
    cin>>str2;

    strcat(str1, str2);

    cout<<"New String is "<<str1<<"\n";

    getch();
}

