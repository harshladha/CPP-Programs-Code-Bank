// Search Value in array using Pointer
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],*x,i,s,f=0;
 cout<<"Enter elements of Array"<<endl;
 x=&a[0];
 for(i=0;i<=9;i++)
 {
  cout<<"Element "<<i+1<<":";
  cin>>*x;
  x++;
 }
 cout<<"Enter the value to search:";cin>>s;
 x=&a[0];
 for(i=0;i<=9;i++)
 {
  if(s==*x)
  {
   f++;
  }
  x++;
 }
 if(f>=1)
 {
  cout<<"Found";
 }
 else
 {
  cout<<"No such value exists";
 }
 getch();
}