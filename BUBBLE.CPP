//bubble sorting

#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[20],i,x,j,n;
  cout<<"how many elements";
  cin>>n;
  for(i=0;i<=n-1;i++)
  cin>>a[i];
  for(i=0;i<=n-2;i++)
  {
	for(j=0;j<=n-i-2;j++)
	if ( a[j]> a[j+1] )
	{
		x = a[j];
		a[j] = a[j+1];
		a[j+1] = x;
	}
  }
  for(i=0;i<=n-1;i++)
  {
	cout<<a[i];
	cout<<'\n';
  }
  getch();
}


