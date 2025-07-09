#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i=1,r=0;
 while(i<=10)
 {
  cout<<"Enter value ";cout<<i;cout<<"=";
  cin>>a[i];
  r=r+a[i];
  i++;
 }
 cout<<"Total=";cout<<r;
 getch();
}