#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a=0,s,i=1;
 while(i<=10)
 {
  a=a+pow(i,2);
  i++;
 }
 cout<<"Sum of Squares of 1 to 10=";
 cout<<a;
 getch();
}