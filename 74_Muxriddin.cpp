#include <iostream>
#include <cmath>
using namespace std;
int recursiya_daraja(int m, int y);
int recursiya_faktorial(int m);
int main ()
{
	int n,x;
	double s=0,f;
	cin>>n>>x;
	
	for(int i=1; i<=2*n-1; i+=2)
	{
		f=pow(x,i)/recursiya_faktorial(i);
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
int recursiya_faktorial(int m)
{
	if(m==0||m==1)
	return 1;
	else
	{
		
		return m*recursiya_faktorial(m-1);
	}
}
