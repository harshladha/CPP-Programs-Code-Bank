/* 1
   13
   135
   1357
   13579
*/
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int i,j;
 for(i=1;i<=9;i+=2)
 {
  for(j=1;j<=i;j+=2)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}