/* do while
perfect or not
prime or not
palindrom or not */

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a,i=2,f=0;
 int r;
 cout<<"a=";cin>>a;
 do
 {
  r=a%i;
  if(r==0)
  {
   f++;
  }
  i++;
 }while(i<=a);
 if(f==1)
 {
  cout<<"Prime";
 }
 else
 {
  cout<<"Non-prime";
 }
 getch();
}
