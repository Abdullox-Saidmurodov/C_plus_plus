#include <iostream>
#include <math.h>
using namespace std;
int main () {
	float x,y,f1;
	cin>>x>>y;
	cout.precision(2);
	f1=2.0*tan(x+M_PI/6)/(1.0/3.0+cos(y+x*x)*cos(y+x*x))+log(x*x+2.0)/log(2.0);	
	cout<<fixed<<f1;
	return 0;
}
