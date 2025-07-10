/* Take 10 values from user in an array and then print sum
   Using the parameter without return
*/
#include<iostream.h>
#include<conio.h>
void array(int a[])
{
 int i,t=0;
 for(i=0;i<=9;i++)
 {
  t=t+a[i];
 }
 cout<<"Total="<<t;
}
void main()
{
 clrscr();
 int a[10];
 int i,t;
 for(i=0;i<=9;i++)
 {
  cout<<"Enter element "<<i+1<<":";cin>>a[i];
 }
 array(a);
 getch();
}