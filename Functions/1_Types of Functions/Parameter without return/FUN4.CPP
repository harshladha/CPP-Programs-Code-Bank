/*
Third Function   (parameter witout return)
Area of Rectangle
*/
#include<iostream.h>
#include<conio.h>
void area(int x, int y)
{
 int a;
 a=x*y;
 cout<<"Area of rectangle="<<a;

}
void main()
{
 clrscr();
 int l,b;
 cout<<"Enter length of Rectangle:";cin>>l;
 cout<<"Enter Breadth of Rectangle:";cin>>b;
 area(l,b);
 getch();
}