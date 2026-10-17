
// QUESTION: COUNT THE NUMBER OF VOWELS IN A STRING

#include<iostream.h>
#include<conio.h>

void main()
{
    char str[50];
    int i, count = 0;

    clrscr();

    cout<<"Enter a string :: ";
    cin>>str;

    cout<<"String is "<<str<<"\n";

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    cout<<"Number of Vowels is "<<count;

    getch();
}
