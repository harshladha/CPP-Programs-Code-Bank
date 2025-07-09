#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x=2,*y;
y=&x;
cout<<"address of x="<<&x<<endl; //100
cout<<"address of x="<<y<<endl;  //100
cout<<"address of y="<<&y<<endl;//200
cout<<"value of x="<<x<<endl;
cout<<"value of x="<<*&x<<endl;
cout<<"value of x="<<*y<<endl;
getch();
}
