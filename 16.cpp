#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x,y,c;
	cin>>x>>y;
	cout.precision(2);
	
	c=(x+y)/(y*y+fabs((y*y+2.0)/(x+x*x*x/5.0)))+pow(M_E,y+2.0);

    cout<<fixed<<c; 
	return 0;
}
