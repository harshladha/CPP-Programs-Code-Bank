/* Strutures
   Date Print
*/
#include<iostream.h>
#include<conio.h>
class date
{
 public:
 int d,m,y;
};
void main()
{
 clrscr();
 date dt1,dt2;
 cout<<"Date 1:";cin>>dt1.d;
 cout<<"Month 1:";cin>>dt1.m;
 cout<<"Year 1:";cin>>dt1.y;
 cout<<"Date 2:";cin>>dt2.d;
 cout<<"Month 2:";cin>>dt2.m;
 cout<<"Year 1:";cin>>dt2.y;
 cout<<dt1.d<<"-"<<dt1.m<<"-"<<dt1.y<<endl;
 cout<<dt2.d<<"-"<<dt2.m<<"-"<<dt2.y<<endl;
 getch();
}