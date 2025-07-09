#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x,a=1,r;
 cout<<"Enter value of x:";cin>>x;
 while(a<=10)
 {
  r=a*x;
  cout<<"\n"<<r;
  a++;
 }
 getch();
}