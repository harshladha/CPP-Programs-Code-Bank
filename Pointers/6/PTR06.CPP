// Enter string and print it using pointer
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[20],*x,i,l=0;
 x=&a[0];
 cout<<"Enter String:";
 cin.getline(a,20);
 l=strlen(a);
 x=x+l;
 for(i=l-1;i>=0;i--)
 {
  x--;
  cout<<*x;
 }
 getch();
}