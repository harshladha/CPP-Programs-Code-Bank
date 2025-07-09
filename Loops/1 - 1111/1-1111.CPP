#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a=1,x=1,i=1;
 while(i<=4)
 {
  cout<<x;cout<<"\n";
  x=x+pow(10,i);
  i++;
 }
 getch();
}