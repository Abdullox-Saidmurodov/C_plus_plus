#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c;
	double x,W1;
	cin>>a>>b>>c>>x;
	cout.precision(2);
	W1=0.75+(8.2*x*x+sqrt(fabs(x*x*x+3.0*x)+cos(x-2.0)))/(a/4.0+b/3.0+c/2.0+1.0);
	cout<<fixed<<W1;
	
	return 0;
}
