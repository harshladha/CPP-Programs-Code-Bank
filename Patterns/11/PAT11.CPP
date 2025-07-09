/* 97531
   9753
   975
   97
   9
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=1;i<=9;i+=2)
 {
  for(j=9;j>=i;j-=2)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}