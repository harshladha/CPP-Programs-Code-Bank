#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,a,i=1,b;
 cout<<"x=";cin>>x;
 cout<<"value\tfactorial\n";
 while(i<=x)
 {
  cout<<i;cout<<"\t";
  b=i;
  a=1;
  while(b>=1)
  {
   a=a*b;
   b=b-1;
  }
  cout<<a;cout<<"\n";
  i++;
 }
 getch();
}