//Enter string and count vowels separately
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[20],*x,i,l=0;
 int fa=0,fe=0,fi=0,fo=0,fu=0;
 x=&a[0];
 cout<<"Enter string:";
 cin.getline(a,20);
 l=strlen(a);
 x=x+l;
 for(i=l-1;i>=0;i--)
 {
  x--;
  if(*x=='a'||*x=='A')
  {
   fa++;
  }
  if(*x=='e'||*x=='E')
  {
   fe++;
  }
  if(*x=='i'||*x=='I')
  {
   fi++;
  }
  if(*x=='o'||*x=='O')
  {
   fo++;
  }
  if(*x=='u'||*x=='U')
  {
   fu++;
  }
 }
 cout<<"Vowel Count"<<endl<<"a="<<fa<<endl;
 cout<<"e="<<fe<<endl<<"i="<<fi<<endl;
 cout<<"o="<<fo<<endl<<"u="<<fu;
 getch();
}