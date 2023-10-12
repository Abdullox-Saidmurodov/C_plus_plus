#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double h,g,t;
	cin>>h;
	g=9.8;
	t=sqrt(2*h/g);
	cout.precision(2);
	cout<<fixed<<t;	
	
	return 0;
}
