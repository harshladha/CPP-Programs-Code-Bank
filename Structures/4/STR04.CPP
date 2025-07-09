/* Enter name and roll number of 5 studetnts
   Their Marks in 5 subjects then print their total, % and division
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class student
{
 public:
 char a[20];
 int r,m[5],t;
 float p;
};
void main()
{
 clrscr();
 student st[5];
 int i,j;
 for(i=0;i<=4;i++)
 {
  cout<<"Enter Name:";cin>>st[i].a;
  cout<<"Enter Roll Number:";cin>>st[i].r;
  for(j=0;j<=4;j++)
  {
   cout<<"Enter Marks in Subject "<<j+1<<":";cin>>st[i].m[j];
  }
 }
 cout<<"Roll Number\tName\tTotal Marks\tPercentage\tDivision"<<endl;
 for(i=0;i<=4;i++)
 {
  st[i].t=0;
  for(j=0;j<=4;j++)
  {
   st[i].t=st[i].t+st[i].m[j];
  }
  st[i].p=st[i].t*.2;
  cout<<"\t"<<st[i].r<<"\t"<<st[i].a<<"\t\t"<<st[i].t<<"\t"<<setprecision(2)<<st[i].p<<"\t\t";
  if(st[i].p>=95)
  {
   cout<<"First"<<endl;
  }
  else if(st[i].p>=85 && st[i].p<95)
  {
   cout<<"Second"<<endl;
  }
  else if(st[i].p>=75 && st[i].p<85)
  {
   cout<<"Third"<<endl;
  }
  else if(st[i].p>=33 && st[i].p<75)
  {
   cout<<"Fourth"<<endl;
  }
  else
  {
   cout<<"Fail"<<endl;
  }
 }
 getch();
}