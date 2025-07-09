/* 54321
   4321
   321
   21
   1
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=5;i>=1;i--)
 {
  for(j=i;j>=1;j--)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}