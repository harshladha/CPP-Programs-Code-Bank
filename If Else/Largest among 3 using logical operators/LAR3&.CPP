#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;
 cout<<"c=";
 cin>>c;
 if(a>b && a>c)
 {
  cout<<"a is largest";
 }
 if(b>a && b>c)
 {
  cout<<"b is largest";
 }
 if(c>a && c>b)
 {
  cout<<"c is largest";
 }
 getch();
}