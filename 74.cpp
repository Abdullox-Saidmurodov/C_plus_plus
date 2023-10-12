#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x;
	double s=0,a=1;
	cin>>n>>x;

		for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			a*=2*i-1;
		}
	
		s+=pow(x,2*i-1)/a;
	}
	cout.precision(3);
	cout<<fixed<<s;
	

 	return 0;
}
