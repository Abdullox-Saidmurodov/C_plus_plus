#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a,b,T;
	cin>>a>>b;
	
	cout.precision(2);
	
	T=pow(a,1.0/5)+pow(b*(a+b)/(2.0*b+a*b),1/4.0)*(a*a+b*b+2.0);
	
	cout<<fixed<<T;
		
	return 0;
}
