/* 1
   123
   12345
   1234567
   123456789
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=1;i<=9;i+=2)
 {
  for(j=1;j<=i;j++)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}