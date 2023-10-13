#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	unsigned int N;
	cin>>N;
	const int k=N+1;
	int a[k],b[k],c[k],x=0,y=0,z=0,v;
	
	if(N<=10)
	{
		for(int i=1; i<=N; i++)
		{
			cin>>a[i];
			b[N-i+1]=a[i];
			c[i]=a[i];
		}
		for(int j=1; j<=N; j++)
		{
			for(int i=1; i<=j; i++)
			{
				if(a[j]<a[i])
				{
					a[i]=a[i]+a[j];
					a[j]=a[i]-a[j];
					a[i]=a[i]-a[j];
				}
			}		
		}
		
	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=i; j++)
		{
			x=a[j]+x;
			y=b[j]+y;
			z=c[j]+z;	
		}
	}
	
	if(x<=300&&y<=300&&z<=300)
	{
		v=min(x,(max(y,z)));
		if(x==v)
		cout<<"1";
		else
		if(y==v)
		cout<<"3";
		else
		if(z==v)
		cout<<"5";
		
	}
	
	}
	
	return 0;
}
