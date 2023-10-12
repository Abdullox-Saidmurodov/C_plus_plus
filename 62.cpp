#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	double s=0,a;
	cin>>n;
	if(n>=1&&n<=9)
	{
		for(int i=1; i<=n; i++)
	{
		a=pow(i,i);
		s=s+pow((-1.0),(i-1))*(sin(a)/pow(2.0,i));
	}
	cout.precision(2);
	cout<<fixed<<s;
	}
	
	
 	return 0;
}

