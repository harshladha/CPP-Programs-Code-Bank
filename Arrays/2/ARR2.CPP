/* Enter 10 value ans search a specific value */
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,x,c=0;
 cout<<"Enter 10 values\n";
 for(i=0;i<=9;i++)
 {
  cout<<i+1;cout<<":";cin>>a[i];
 }
 cout<<"Enter the value for searching:";cin>>x;
 for(i=0;i<=9;i++)
 {
  if(a[i]==x)
  {
   c++;
  }
 }
 if(c>=1)
 {
  cout<<"Found";
 }
 else
 {
  cout<<"Not Found";
 }
 getch();
}