/* Enter 3 by 3 Matrix and print it */
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[3][3],i,j;
 cout<<"Enter values of matrix:"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"Matrix:"<<endl;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
 getch();
}