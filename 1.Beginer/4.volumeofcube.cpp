#include<iostream.h>
#include<conio.h>

void main()
{
    int side, volume;

    cout<<"Enter the side of cube ::";
    cin>>side;

    volume = side * side * side;

    cout<<"Volume of Cube ="<<volume;

    getch();
}