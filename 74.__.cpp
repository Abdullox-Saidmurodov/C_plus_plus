#include <iostream>
using namespace std;
int recursiya_daraja(int m, int y);
int recursiya_faktorial(int m, int d);
int main ()
{
	int n,x;
	double s=0,f;
	cin>>n>>x;
	
	for(int i=1; i<=n; i++)
	{
		f=recursiya_daraja((2*i-1),x)/recursiya_faktorial((2*i-1),1);
		s=s+f;
	}
	cout.precision(3);
	cout<<fixed<<s;
	return 0;
}
int recursiya_daraja(int m, int y)
{
	if(m==0)
	return y;
	else
	{
		y*=y;
		m--;
		return recursiya_daraja(m,y);
	}
}
int recursiya_faktorial(int m, int d)
{
	if(m==0)
	return d;
	else
	{
		d*=m;
		m--;
		return recursiya_daraja(m,d);
	}
}
