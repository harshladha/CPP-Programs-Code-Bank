#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i=1,j=10,r=0,s=0;
 while(i<=10)
 {
  cout<<i;cout<<"/";
  r=r+i;
  cout<<j;cout<<"+";
  s=s+j;
  i++;
  j--;
 }
 cout<<"\b=";cout<<r;cout<<"/";cout<<s;
 getch();
}