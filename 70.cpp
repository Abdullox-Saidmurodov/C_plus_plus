#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x,a;
	double s=0;
	cin>>n>>x;
	if(n>=0&&n<=9&&x>=0&&x<=9)
	{
	for(int i=1; i<=n; i++)
	{
		a=1;
		for(int j=1; j<=2*i-1; j++)
		{
			a*=j;
		}
		s+=pow(-1,i-1)*pow(x,2*i-1)/a;
	}
	cout.precision(3);
	cout<<fixed<<s;	
	}

	
 	return 0;
}

