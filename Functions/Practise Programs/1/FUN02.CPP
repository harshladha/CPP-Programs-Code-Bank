/* Simple Function
   Take Name, Roll no. and Marks of 5 Subjects
   Print Total Marks, % and Division
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void student()
{
 char a[20];
 int r,m[5],t,i;
 float p;
 cout<<"Enter Name:";cin>>a;
 cout<<"Enter Roll Number:";cin>>r;
 for(i=0;i<=4;i++)
 {
  cout<<"Enter Marks in subject "<<i+1<<":";cin>>m[i];
 }
 t=0;
 for(i=0;i<=4;i++)
 {
  t=t+m[i];
 }
 p=t*.2;
 cout<<"Roll Number\tName\tTotal Marks\tPercentage\tDivision"<<endl;
 cout<<"\t"<<r<<"\t"<<a<<"\t"<<t<<"\t\t"<<setprecision(2)<<p<<"\t\t";
 if(p>=95)
 {
  cout<<"First";
 }
 else if(p>=85 && p<95)
 {
  cout<<"Second";
 }
 else if(p>=75 && p<85)
 {
  cout<<"Third";
 }
 else if(p>=33 && p<75)
 {
  cout<<"Fourth";
 }
 else
 {
  cout<<"Fail";
 }
}
void main()
{
 clrscr();
 student();
 getch();
}

// Do this program for 5 students