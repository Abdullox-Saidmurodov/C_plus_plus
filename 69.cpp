#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x,a=1;
	double s=0;
	cin>>n>>x;
	for(int i=1; i<=n; i++)
	{
		a=1;
		for(int j=1; j<=i; j++)
		{
			a*=j;
		}
		s+=pow(-1,i)*pow(x,i)/a;
	}
	cout.precision(3);
	cout<<fixed<<s;
	
 	return 0;
}

