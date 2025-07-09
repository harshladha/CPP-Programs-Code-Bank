//512,256,128................,1
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a=1024;
 while(a>=1)
 {
  a=a-a/2;
  cout<<a;cout<<"\n";
  a--;
 }
 getch();
}