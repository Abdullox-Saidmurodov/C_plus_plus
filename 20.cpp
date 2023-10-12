#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double T11,x,y;
	cin>>x>>y;
	cout.precision(2);
	
	T11=(x*x+1)/(x*x+(x*y+y*y)/(y*y+(y+x*y)/(fabs(x*y)+5.0)))+1.0/(1+cos(x)+1/sin(fabs(x)));
	
	cout<<fixed<<T11;
	
	return 0;
}
