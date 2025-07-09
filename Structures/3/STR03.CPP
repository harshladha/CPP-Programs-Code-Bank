/* Enter Name, Roll no. & Marks in 5 subjects of 5 studetns
   Print the total marks and % of each student
*/
#include<iostream.h>
#include<conio.h>
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
  cout<<"Enter Roll Number:";cin>>st[i].r;
  cout<<"Enter Name of Roll Number "<<st[i].r<<":";cin>>st[i].a;
  for(j=0;j<=4;j++)
  {
   cout<<"Enter Marks of "<<st[i].a<<" in Subject "<<j+1<<":";cin>>st[i].m[j];
  }
 }
 for(i=0;i<=4;i++)
 {
  st[i].t=0;
  for(j=0;j<=4;j++)
  {
   st[i].t=st[i].t+st[i].m[j];
  }
  st[i].p=st[i].t*.2;
  cout<<"Rollno.\tName\tTotal Marks\tPercentage"<<endl;
  cout<<st[i].r<<"\t"<<st[i].a<<"\t"<<st[i].t<<"\t\t"<<(float)st[i].p<<"%"<<endl;
 // cout<<"Total Percentage of "<<st[i].a<<"="<<(float)st[i].p<<endl;
 }
 getch();
}
//