#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a;
 cout<<"enter a number:";
 cin>>a;
 switch(a)
 {
  case 1:cout<<"one";break;
  case 2:cout<<"two";break;
  case 3:cout<<"three";break;
  case 4:cout<<"four";break;
  case 5:cout<<"five";break;
  default:cout<<"invalid";
 }
 getch();
}