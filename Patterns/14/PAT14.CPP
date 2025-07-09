/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=1;i<=15;i++)
 {
  for(j=1;j<=i;j++)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}
