/* Multiply 2 matrix and show in 3rd one */
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[3][3],b[3][3],c[3][3],i,j;
 //matrix 1
 cout<<"Enter Matrix 1"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cin>>a[i][j];
  }
 }
 //matrix 2
 cout<<"Enter Matrix 2"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cin>>b[i][j];
  }
 }
 //calculation
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   c[i][j]=a[i][j]*b[i][j];
  }
 }
 //print result
 cout<<"Matrix 1 x Matrix 2"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cout<<c[i][j]<<" ";
  }
  cout<<endl;
 }
 getch();
}