/*
   *********
   *******
   *****
   ***
   *
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=9;i>=1;i=i-2)
 {
  for(j=1;j<=i;j++)
  {
   cout<<"*";
  }
  cout<<"\n";
 }
 getch();
}