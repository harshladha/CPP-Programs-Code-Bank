#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int d,m,y;
 cout<<"Enter Date:";
 cin>>d;
 cout<<"Enter Month:";
 cin>>m;
 cout<<"Enter Year:";
 cin>>y;
 switch(m)
 {
  case 1:cout<<d;cout<<"-jan-"<<y;break;
  case 2:cout<<d;cout<<"-feb-"<<y;break;
  case 3:cout<<d;cout<<"-mar-"<<y;break;
  case 4:cout<<d;cout<<"-apr-"<<y;break;
  case 5:cout<<d;cout<<"-may-"<<y;break;
  case 6:cout<<d;cout<<"-jun-"<<y;break;
  case 7:cout<<d;cout<<"-jul-"<<y;break;
  case 8:cout<<d;cout<<"-aug-"<<y;break;
  case 9:cout<<d;cout<<"-sep-"<<y;break;
  case 10:cout<<d;cout<<"-oct-"<<y;break;
  case 11:cout<<d;cout<<"-nov-"<<y;break;
  case 12:cout<<d;cout<<"-dec-"<<y;break;
  default:cout<<"invalid";
 }
 getch();
}

/*enter two values and find their
sum
sub
mul
div
avg
min
max
according to the choice enterd by the user
*/