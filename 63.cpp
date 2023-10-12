#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,a,b=1;
	double s=0;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		a=1;
		for(int j=1; j<=2*i-1; j++)
		{
			a*=j;
		}
		s+=pow(-1,i-1)/a;
		
	}
	cout.precision(4);
	cout<<fixed<<s;
	
 	return 0;
}

