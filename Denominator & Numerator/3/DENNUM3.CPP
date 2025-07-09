#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x,i=1,r=0,j,s=0;
 cout<<"x=";cin>>x;
 while(i<=x)
 {
  cout<<i;cout<<"/";
  j=pow(i,2);
  cout<<j;cout<<"+";
  r=r+i;
  s=s+j;
  i++;
 }
 cout<<"\b=";cout<<r;cout<<"/";cout<<s;
 getch();
}