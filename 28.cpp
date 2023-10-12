#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a;
	double x,BB1;
	cin>>a>>x;
	
	BB1=x*sin(x/2.0+x/3.0+x/4.0)+(log10(x*x-2)+pow(3.0,a))/(cos(x+3)*sin(x+3)+8.0);  
	cout.precision(2);
	cout<<fixed<<BB1;
	return 0;
}

BB1=x*sin(x/2.0+x/3.0+x/4.0)+(log(x*x-2.0)/log(10.0)+pow(3.0,a))/(cos(x+3.0)*sin(x+3.0)+8.0);
BB1=x*sin(x/2.0+x/3.0+x/4.0)+(log10(x*x-2)+pow(3.0,a))/(cos(x+3)*sin(x+3)+8.0);
