//Enter 10 elements in an array and print them using third function
#include<iostream.h>
#include<conio.h>
void array(int a[])
{
 int i,*x;
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
 int a[10],i;
 cout<<"Enter array"<<endl;
 for(i=0;i<=9;i++)
 {
  cout<<"Element "<<i+1<<":";
  cin>>a[i];
 }
 array(a);
 getch();
}