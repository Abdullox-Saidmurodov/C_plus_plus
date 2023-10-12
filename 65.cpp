#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x;
	double s=0;
	cin>>n>>x;
		if(n>=0&&n<=9)
	{
		for(int i=1; i<=n; i++)
	{
		s+=i/pow(x,2*i);
	}
	cout.precision(3);
	cout<<fixed<<s;
	}
	
	
 	return 0;
}

