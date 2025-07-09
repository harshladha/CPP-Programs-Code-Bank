#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float q,r,t,a;
 cout<<"Quantity:";cin>>q;
 cout<<"Rate:";cin>>r;
 t=q*r;
 a=q>1000?t-0.10*t:t-0.05*t;
 cout<<"amount payable:"<<a;
 getch();
}