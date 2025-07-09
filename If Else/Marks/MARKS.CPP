#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float r,m1,m2,m3,m4,m5,t,p,d;
 cout<<"Roll Number:";
 cin>>r;
 cout<<"Marks in English:";
 cin>>m1;
 cout<<"Hindi:";
 cin>>m2;
 cout<<"Maths:";
 cin>>m3;
 cout<<"Science:";
 cin>>m4;
 cout<<"Sst:";
 cin>>m5;
 t=m1+m2+m3+m4+m5;
 p=(t/500)*100;
 cout<<"total="<<t;
 cout<<"\npercentage="<<p;
 cout<<"\n";
 if(p>=95)
 {
  cout<<"1 Div";
 }
 if(p>=85 && p<95)
 {
  cout<<"2 Div";
 }
 if(p>=75 && p<85)
 {
  cout<<"3 Div";
 }
 if(p>=33 && p<75)
 {
  cout<<"4 Div";
 }
 if(p<33)
 {
  cout<<"FAIL";
 }
 getch();
}