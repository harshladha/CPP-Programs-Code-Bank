/* Simple Function
   Take Name, Roll no. and Marks in 5 subjects for 5 Students
   Print their marks, % and division
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void marks() // function marks
{
 class students //structure students
 {
   public:
   char a[20];
   int r,m[5],t;
   float p;
 };
 students st[5];
 int i,j;
 for(i=0;i<=4;i++)
 {
  cout<<"Enter name:";cin>>st[i].a;
  cout<<"Enter Roll number:";cin>>st[i].r;
  for(j=0;j<=4;j++)
  {
   cout<<"Enter Marks for subject "<<j+1<<":";cin>>st[i].m[j];
  }
 }
 cout<<"Roll Number\tName\t\tTotal Marks\tPercentage\tDivision"<<endl;
 for(i=0;i<=4;i++)
 {
  st[i].t=0;
  for(j=0;j<=4;j++)
  {
   st[i].t=st[i].t+st[i].m[j];
  }
  st[i].p=st[i].m[j]*.2;
  cout<<"\t"<<st[i].r<<"\t"<<st[i].a<<"\t\t"<<st[i].m[j]<<"\t\t"<<setprecision(2)<<st[i].p<<"\t\t";
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
}
void main()
{
 clrscr();
 marks(); //function marks called
 getch();
}