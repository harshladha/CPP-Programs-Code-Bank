#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float c,a,r,p=3.14;
 cout<<"enter radius of circle:";
 cin>>r;
 a=p*pow(r,2);
 c=2*p*r;
 cout<<"area of circle is:"<<a;
 cout<<"\n";
 cout<<"circumference of circle is:"<<c;
 getch();
}