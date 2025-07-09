#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float a,b,r;
 int c;
 cout<<"Enter a:";
 cin>>a;
 cout<<"Enter b:";
 cin>>b;
 cout<<"Operations to perform\n1).Sum\n2).Sub\n3).Multiplication\n4).Division\n5).Average\n6).Minimum\n7).Maximum";
 cout<<"\nEnter your choice of operation:";
 cin>>c;
 switch(c)
 {
  case 1:r=a+b;cout<<"Result="<<r;break;
  case 2:r=a-b;cout<<"Result="<<r;break;
  case 3:r=a*b;cout<<"Result="<<r;break;
  case 4:r=a/b;cout<<"Result="<<r;break;
  case 5:r=(a+b)/2;cout<<"Result="<<r;break;
  case 6:if(a<b){r=a;}else{r=b;}cout<<"Result="<<r;break;
  case 7:if(a>b){r=a;}else{r=b;}cout<<"Result="<<r;break;
  default:cout<<"invalid";
 }
 getch();
}