#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x1,x2,F;
	int c,d;
	cin>>x1>>x2>>c>>d;
	
	cout.precision(2);
	F=fabs((sin(fabs(c*x2*x2*x2+d*x1*x1*x1-c*d))*sin(fabs(c*x2*x2*x2+d*x1*x1*x1-c*d)))/sqrt((c*x1*x1+d*x2*x2+5.0)+2.0))+tan(x1*x2*x2+d*d*d);
	cout<<fixed<<F;
	
	return 0;
}
