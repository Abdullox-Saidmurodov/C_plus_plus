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
		cout<<"1";
	}
	
	return 0;
}
