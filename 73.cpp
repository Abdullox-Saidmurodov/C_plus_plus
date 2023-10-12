#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,x;
	double s=0,a=1;
	cin>>n>>x;
	if(n>=0&&x>=0&&n<=9&&x<=9)
	{
			for(int i=1; i<=n; i++)
	{
			a*=2.0*i-1;
		s+=pow(x,2.0*i-1)/a;
	}
	cout.precision(3);
	cout<<fixed<<s;
	}


 	return 0;
}

