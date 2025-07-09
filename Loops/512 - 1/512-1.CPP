//512,256,128................,1
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a,i=9;
 while(i>=0)
 {
  a=pow(2,i);
  cout<<a;cout<<"\n";
  i--;
 }
 getch();
}