#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,x,b=1,a=1;
	double s=0;
	cin>>n>>x;
	for(int i=0; i<=2*n-2; i+=2)
	{
		for(int j=1; j<=i; j++)
		{
			a*=j;
		}
		s+=pow(-1,b-1)*pow(x,i)/a;
		b++;
	}
	cout.precision(3);
	cout<<fixed<<s;
	
 	return 0;
}

