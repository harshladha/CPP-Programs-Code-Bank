#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b;
 cout<<"a=";cin>>a;
 cout<<"b=";cin>>b;
 while(a<=b)
 {
  if(a%2==1)
  {
   cout<<"\n"<<a;
   a=a+2;
  }
  else
  {
   a=a+1;
  }
 }
 getch();
}