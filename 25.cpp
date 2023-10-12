#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a;
	double x,TT;
	cin>>a>>x;

	TT=(sqrt(x-1.0)+sqrt(x+2.0)+log(sqrt(a*x*x)+2.0)/log(10))/sqrt(sqrt(x+2.0)+sqrt(x+24.0)+x*x*x*x*x);
	cout.precision(2);
	cout<<fixed<<TT;	
	
	return 0;
}
