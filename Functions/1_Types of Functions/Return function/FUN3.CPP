/*
second Function   (return)
Area of Rectangle
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int area()
{
 int l,b,a;
 cout<<"Enter length of Rectangle:";cin>>l;
 cout<<"Enter Breadth of Rectangle:";cin>>b;
 a=l*b;
 return (a);
}
void main()
{
 clrscr();
 int k;
 k=area();
 cout<<"Area of rectangle="<<k;
 getch();
}