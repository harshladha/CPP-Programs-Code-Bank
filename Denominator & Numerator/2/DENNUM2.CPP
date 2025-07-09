#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,i=1,r=0,s=0;
 while(i<=10)
 {
  a=i;
  r=r+a;
  b=a+1;
  s=s+b;
  cout<<a;cout<<"/";cout<<b;cout<<"+";
  i=i+2;
 }
 cout<<"\b=";cout<<r;cout<<"/";cout<<s;
 getch();
}