#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	double s=0;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		s=s+sin(i)/pow(2,i);
	}
	
	cout.precision(2);
	cout<<fixed<<s;
	
 	return 0;
}
