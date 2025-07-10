/*
Fourth Function   (parameter with return)
Area of Rectangle
*/
#include<iostream.h>
#include<conio.h>
int area(int x, int y)
{
 int a;
 a=x*y;
 return a;
}
void main()
{
 clrscr();
 int l,b,k;
 cout<<"Enter length of Rectangle:";cin>>l;
 cout<<"Enter Breadth of Rectangle:";cin>>b;
 k=area(l,b);
 cout<<"Area of rectangle="<<k;
 getch();
}