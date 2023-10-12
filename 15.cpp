#include <iostream>
using namespace std;
int main ()
{
	double  r1,r2,r3,r;
	cin>>r1>>r2>>r3;
	
	r=(r1*r2*r3)/(r1*r2+r2*r3+r3*r1);
	cout.precision(2);
	cout<<fixed<<r;
	
	return 0;
}
