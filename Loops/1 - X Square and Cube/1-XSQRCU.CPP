#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x,i=1,s,c;
 cout<<"x=";cin>>x;
 cout<<"Value\tSquare\tCube\n";
 while(i<=x)
 {
  cout<<i;cout<<"\t";
  s=pow(i,2);cout<<s;cout<<"\t";
  c=pow(i,3);cout<<c;cout<<"\n";
  i++;
 }
 getch();
}