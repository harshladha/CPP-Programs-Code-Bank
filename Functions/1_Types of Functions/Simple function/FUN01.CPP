/*
Simple Function
Area of Rectangle
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void area()
{
 int l,b,a;
 cout<<"Enter length of Rectangle:";cin>>l;
 cout<<"Enter Breadth of Rectangle:";cin>>b;
 a=l*b;
 cout<<"Area of rectangle="<<a;
}
void main()
{
 clrscr();
 area();
 getch();
}