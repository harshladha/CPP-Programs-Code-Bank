#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x,i=1,r;
 cout<<"x=";cin>>x;
 cout<<"Value\t";cout<<"Power\t";cout<<"Result\n";
 while(i<=10)
 {
  cout<<x;cout<<"\t";cout<<i;cout<<"\t";
  r=pow(x,i);cout<<r;cout<<"\n";
  i++;
 }
 getch();
}