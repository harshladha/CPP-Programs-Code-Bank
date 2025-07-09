#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=1,b,c;
 cout<<"Enter a value:";cin>>b;
 while(a<=b)
 {
  c=a*a;
  cout<<"\n"<<c;
  a++;
 }
 getch();
}