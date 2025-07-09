#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i=0,j=10,a,s;
 while(i<=10)
 {
  s=i+j;
  cout<<i;cout<<"+";cout<<j;cout<<"=";cout<<s;cout<<"\n";
  i++;
  j--;
 }
 getch();
}