#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c,d;
	double x,y2;
	cin>>a>>b>>c>>d>>x;
	cout.precision(2);
	y2=(a*x*x+b*x+c)/(x*a*a*a+a*a+pow(a,b-c))+cos(fabs((a*x+b)/(c*x+d+pow(2.0,c))));
	cout<<fixed<<y2;
	
	return 0;
}
