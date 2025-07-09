#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=0,i,x,j,z;
 float b;//b=avg;
 cout<<"x=";cin>>j;
 cout<<"y=";cin>>x;
 i=j;
 while(i<=x)
 {
  a=a+i;
  i++;
 }
 cout<<"sum of ";cout<<j;cout<<" to ";cout<<x;cout<<"=";cout<<a;
 z=x-j;
 b=(float)a/z;
 cout<<"\nAvg of ";cout<<j;cout<<" to ";cout<<x;cout<<"=";cout<<b;
 getch();
}