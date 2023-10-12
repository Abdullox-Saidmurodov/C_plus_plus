#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x,a;
	cin>>x;

	a=x*365*24*60*60/1000;
    cout.precision(0);
	cout<<fixed<<a;	

	return 0;
}
