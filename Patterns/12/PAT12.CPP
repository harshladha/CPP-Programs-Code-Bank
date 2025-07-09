/* 13579
   1357
   135
   13
   1
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=9;i>=1;i-=2)
 {
  for(j=1;j<=i;j+=2)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}