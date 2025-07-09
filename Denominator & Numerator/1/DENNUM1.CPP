#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,i=1,s=0;
 cout<<"x=";cin>>x;
 while(i<=x)
 {
  cout<<"1/";cout<<i;cout<<"+";
  s=s+i;
  i++;
 }
 cout<<"\b=1/";cout<<s;
 getch();
}