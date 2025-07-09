#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b=1;
 cout<<"a=";cin>>a;
 while(a>=1)
 {
  cout<<a;cout<<"x";
  b=b*a;
  a=a-1;
 }
 cout<<"\b="<<b;
 getch();
}