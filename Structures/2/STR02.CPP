/* Enter Name, Roll no., 5 Subject Marks
   Then print Total marks and %
*/
#include<iostream.h>
#include<conio.h>
class student
{
 public:
 int r,m[5],t;
 float p;
 char a[20];
};
void main()
{
 clrscr();
 student st1;
 int i;
 cout<<"Name:";cin>>st1.a;
 cout<<"Roll Number:";cin>>st1.r;
 for(i=0;i<=4;i++)
 {
  cout<<"Subject "<<i+1<<":";cin>>st1.m[i];
 }
 st1.t=0;
 for(i=0;i<=4;i++)
 {
  st1.t=st1.t+st1.m[i];
 }
 st1.p=st1.t*.2;
 cout<<"Total Marks:"<<st1.t<<endl;
 cout<<"Total Percentage:"<<(float)st1.p;
 getch();
}