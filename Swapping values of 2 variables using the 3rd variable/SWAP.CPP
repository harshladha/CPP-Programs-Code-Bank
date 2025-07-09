#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int a,b,c;
 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;
 c=a;
 a=b;
 b=c;
 cout<<"a="<<a;
 cout<<"\n";
 cout<<"b="<<b;
 getch();
}