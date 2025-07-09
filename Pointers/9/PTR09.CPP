//Enter String and count words and spaces using pointer
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[20],*x,i;
 int l=0;
 int w=0;
 x=&a[0];
 cout<<"Enter String:";
 cin.getline(a,20);
 l=strlen(a);
 x=x+l;
 for(i=l-1;i>=0;i--)
 {
  x--;
  if(*x==' ')
  {
   w++;
  }
 }
 cout<<"Total Characters:"<<l<<endl;
 cout<<"Total Words:"<<l-w<<endl;
 cout<<"Total Spaces:"<<w<<endl;
 getch();
}