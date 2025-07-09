/* Enter 10 values, check even odd positve negative */
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,p=0,n=0,e=0,o=0;
 cout<<"Enter 10 values\n";
 for(i=0;i<=9;i++)
 {
  cout<<i+1;cout<<":";cin>>a[i];
 }
 for(i=0;i<=9;i++)
 {
  if(a[i]>0) //positive
  {
   p++;
  }
  if(a[i]<0)
  {
   n++;                //negative
  }
  if(a[i]%2==0)            //even
  {
   e++;
  }
  if(a[i]%2!=0)  //odd
  {
   o++;
  }
 }
  cout<<"Positive Numbers:";cout<<p;cout<<"\n"; //positive numbers
  cout<<"Negative Numbers:";cout<<n;cout<<"\n"; //negative numbers
  cout<<"Even Numbers:";cout<<e;cout<<"\n"; //even
  cout<<"Odd Numbers:";cout<<o;cout<<"\n"; //odd
 getch();
}