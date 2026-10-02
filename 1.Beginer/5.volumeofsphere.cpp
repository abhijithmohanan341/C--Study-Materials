#include<iostream.h>
#include<conio.h>

void main()
{
    float radius, volume;

    cout<<"Enter the radius of sphere ::";
    cin>>radius;

    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    cout<<"Volume of Sphere ="<<volume;

    getch();
}