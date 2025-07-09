#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a,i=1,r,f=0;
 cout<<"a=";cin>>a;
 do
 {
  r=pow(i,2);
  i++;
  if(r==a)
  {
   f=1;
  }
 }while(i<=a);
 if(f==1)
 {
  cout<<"Perfect";
 }
 else
 {
  cout<<"Not Perfect";
 }
 getch();
}