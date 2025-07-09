// Enter 10 elements in array and print them using pointer
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],*x,i;
 cout<<"Enter elements of Array"<<endl;
 x=&a[0];
 for(i=0;i<=9;i++)
 {
  cout<<"Element "<<i+1<<":";
  cin>>*x;
  x++;
 }
 x=&a[0];
 cout<<"Array:";
 for(i=0;i<=9;i++)
 {
  cout<<*x<<" ";
  x++;
 }
 getch();
}