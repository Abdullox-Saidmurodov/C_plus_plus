#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x;
	float s=0,a;
	cin>>n>>x;
	if(n>=0&&n<=9)
	{
		cout.precision(3);
	for(int i=1; i<=n; i++)
	{
	     a=1;
		for(int j=1; j<=i; j++)
		{
			a*=j;
		}
		s+=pow(x,i)/a;
	}
	cout<<fixed<<s;
	}
	
	return 0;
}
