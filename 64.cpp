#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x;
	double s=0;
	cin>>n>>x;
	
	for(int i=1; i<=n; i++)
	{
		s+=pow(-1,i-1)/pow(x,2*i);
	}
	cout.precision(3);
	cout<<fixed<<s;
	
 	return 0;
}

