#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x;
	double s=0;
	cin>>n>>x;
	
	for(int i=1; i<=n; i++)
	{
		s+=pow(x,i)/sqrt(i);
	}
	cout.precision(3);
	cout<<fixed<<s;
	
 	return 0;
}

