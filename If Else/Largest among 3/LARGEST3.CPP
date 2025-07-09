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
 if(a>b)
 {
  if(a>c)
  {
   cout<<"a is largest";
  }
  else
  {
   cout<<"c is largest";
  }
 }
 else
 {
  if(b>c)
  {
   cout<<"b is largest";
  }
  else
  {
   cout<<"c is largest";
  }
 }
 getch();
}