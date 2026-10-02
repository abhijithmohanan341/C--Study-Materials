#include<iostream.h>
#include<conio.h>

void main()
{
    float radius, height, volume;

    cout<<"Enter the radius of cylinder ::";
    cin>>radius;

    cout<<"Enter the height of cylinder ::";
    cin>>height;

    volume = 3.14 * radius * radius * height;

    cout<<"Volume of Cylinder ="<<volume;

    getch();
}