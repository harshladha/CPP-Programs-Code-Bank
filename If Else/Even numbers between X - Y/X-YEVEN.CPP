#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,y;
 cout<<"x:";cin>>x;
 cout<<"y:";cin>>y;
 while(x<=y)
 {
  if(x%2==0)
  {
   cout<<"\n"<<x;
   x=x+2;
  }
  else
  {
   x=x+1;
  }
 }
 getch();
}