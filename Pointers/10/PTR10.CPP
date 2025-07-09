//Enter 10 elements in array and print them with the first function
#include<iostream.h>
#include<conio.h>
void array()
{
 int a[10],i,*x;
 x=&a[0];
 cout<<"Enter array"<<endl;
 for(i=0;i<=9;i++)
 {
  cout<<"Element "<<i+1<<":";
  cin>>*x;
  x++;
 }
 cout<<"Array:";
 x=&a[0];
 for(i=0;i<=9;i++)
 {
  cout<<*x<<" ";
  x++;
 }
}
void main()
{
 clrscr();
 array();
 getch();
}