#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x=2,*y,**z;
y=&x;
z=&y;
cout<<"address of x="<<&x<<endl; //100
cout<<"address of x="<<y<<endl;  //100
cout<<"address of x="<<*z<<endl;//100
cout<<"address of y="<<&y<<endl;//200
cout<<"address of y="<<z<<endl;  //200
cout<<"address of z="<<&z<<endl;//300
cout<<"value of x="<<x<<endl;
cout<<"value of x="<<*&x<<endl;
cout<<"value of x="<<*y<<endl;
cout<<"value of x="<<**z<<endl;
getch();
}
