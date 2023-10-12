#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double h,r,v;
	cin>>h>>r;  
     v=(1/3.0)*M_PI*r*r*h;
		cout.precision(2);
        cout<<fixed<<v;
	
	return 0;
}

