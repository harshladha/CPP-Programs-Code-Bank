#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,s=0,r,rr;
 cout<<"a=";cin>>a;
 rr=a;
 do
 {
  r=a%10;
  s=s*10+r;
  a=a/10;
 }while(a>0);
 if(s==rr)
 {
  cout<<"Palindrome";
 }
 else
 {
  cout<<"Not Palindrome";
 }
 getch();
}