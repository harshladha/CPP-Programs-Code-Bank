#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,i,r,d=0;
 cout<<"a=";cin>>a;
 i=a;
 do
 {
  if(a%i==0)
  {
   r=a/i;
   d=d+r;
  }
  i--;
 }while(i>1);
 if(d==a)
 {
  cout<<"Perfect Number";
 }
 else
 {
  cout<<"Not Perfect";
 }
 getch();
}