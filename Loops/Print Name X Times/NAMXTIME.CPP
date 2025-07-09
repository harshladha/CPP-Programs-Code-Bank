#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[20];
 int x,i=1;
 cout<<"Enter your name:";cin>>a;
 cout<<"Number of times to print:";cin>>x;
 while(i<=x)
 {
  cout<<i;cout<<". ";cout<<a;cout<<"\n";
  i++;
 }
 getch();
}
