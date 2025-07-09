#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float a,b=0,i=0,r=0,s=0;
 while(i<=4)
 {
  a=pow(10,i);
  cout<<a;cout<<"/";
  r=r+a;
  b=b+pow(10,i);
  cout<<b;cout<<"+";
  s=s+b;
  i++;
 }
 cout<<"\b=";cout<<r;cout<<"/";cout<<s;
 getch();
}