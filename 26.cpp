#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a;
	double x,y,W2;
	cin>>a>>x>>y;
	
	W2=sqrt(exp(x*y)-x*sin(a*x)-(x*x+2)/(fabs(x)+5))+sqrt(log(x*x+2)/log(M_E)+5);
	
	cout.precision(2);
	cout<<fixed<<W2;
	return 0;
}
