#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double m,g,F;
	cin>>m;
	g=9.8;
	F=m*g;
    
    cout.precision(2);
	cout<<fixed<<F;	

	return 0;
}
