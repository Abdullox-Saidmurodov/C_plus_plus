#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x,y,z;
	cin>>x>>y;
	
	cout.precision(2);
	
	z=log(fabs((x+y)*(x+y)+sqrt(fabs(y)+2)-(x-x*y/((x*x)/2.0-5.0))))+(cos(x+y)*cos(x+y))/pow(x+y,1.0/3.0);
	
	cout<<fixed<<z;	
	
	return 0;
}
