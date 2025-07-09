#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float a,r,y,c,s;
 cout<<"enter amount:";
 cin>>a;
 cout<<"enter rate:";
 cin>>r;
 cout<<"enter year:";
 cin>>y;
 s=(a*r*y)/100;
 c=a*pow(1+r/100,y)-a;
 cout<<"SI="<<s;
 cout<<"\n";
 cout<<"CI="<<c;
 getch();
}