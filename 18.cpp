#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x,y,f2;
	cin>>x>>y;
	cout.precision(2);
	f2=(1/(x+2/(x*x)+3/(x*x*x))+exp(x*x+3*x))/(atan(x+y)+fabs((5+x)*(5+x)))-cos(y*y+(x*x)/2)*cos(y*y+(x*x)/2);
	cout<<fixed<<f2;
	
	
	return 0;
}
