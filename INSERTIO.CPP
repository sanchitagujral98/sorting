//insertion sorting

#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[20],i,temp,j,n;
  cout<<"how many elements";
  cin>>n;
  for(i=0;i<=n-1;i++)
  cin>>a[i];
  for(i=0;i<=n-1;i++)
  {
	temp = a[i];
	j = i-1;
	while (j>=0 && temp<a[j])
	{
		a[j+1]= a[j];
		j--;
	}
	a[j+1] = temp;
  }
  for(i=0;i<=n-1;i++)
  {
	cout<<a[i];
	cout<<'\n';
  }
  getch();
}
