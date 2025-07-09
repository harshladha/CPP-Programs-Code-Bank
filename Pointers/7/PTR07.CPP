//Enter a string and count vowels
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[20],*x,i,l=0;
 int f=0;
 x=&a[0];
 cout<<"Enter String:";
 cin.getline(a,20);
 l=strlen(a);
 x=x+l;
 for(i=l-1;i>=0;i--)
 {
  x--;
  if(*x=='a'||*x=='e'||*x=='i'||*x=='o'||*x=='u')
  {
   f=f+1;
  }
 }
 cout<<"Number of Vowels:"<<f;
 getch();
}