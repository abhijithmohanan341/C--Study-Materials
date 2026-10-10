#include<iostream.h>
#include<conio.h>

void main()
{
    char ch;

    cout<<"Enter a character ::";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"Character is Vowel";
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"Character is Vowel";
    }
    else
    {
        cout<<"Character is Consonant";
    }

    getch();
}