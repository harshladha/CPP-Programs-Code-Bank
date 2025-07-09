/* Take Name, Roll no. and marks in 5 subjects of 5 students
   Print their total marks, % and div in tabular form
   Using third method function (parameter without return)
*/
#include<iostream.h>
#include<conio.h>
struct student
{
 public:
 char a[20];
 int r,m[5],t;
 float p;
};
void marks(struct student st[])
{
 int i,j;
 cout<<"Roll Number\tName\tTotal Marks\tPercentage"<<endl;
 for(i=0;i<=4;i++)
 {
  st[i].t=0;
  for(j=0;j<=4;j++)
  {
   st[i].t=st[i].t+st[i].m[j];
  }
  st[i].p=st[i].t*.2;
  cout<<st[i].r<<"\t\t"<<st[i].a<<"\t\t"<<st[i].t<<"\t\t"<<st[i].p<<endl;
 }
}
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
   cout<<"Enter Marks in Subject "<<j+1<<":";
   cin>>st[i].m[j];
  }
 }
 marks(st);
 getch();
}