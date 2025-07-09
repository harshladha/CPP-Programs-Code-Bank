/* Maximum of each row and column */
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[3][3],i,j,b,c;
 cout<<"Enter values for matrix:"<<endl;
 // Enter Matrix
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"Matrix:"<<endl;
 // Print Matrix
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
 //row max
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   b=0;
   if(a[i][j]>b)
   {
    b=a[i][j];
   }
  }
  cout<<"Row max of "<<i+1<<"="<<b<<endl;
 }
 //column max
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   c=0;
   if(a[j][i]>c)
   {
    c=a[j][i];
   }
  }
  cout<<"Col Max of "<<i+1<<"="<<c<<endl;
 }
 getch();
}