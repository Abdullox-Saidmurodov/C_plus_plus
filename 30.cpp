#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int x;
	double y,z,AF;
	cin>>x>>y>>z;
	AF=pow(2.0,-x)*sqrt(x+pow(fabs(y)+2,1.0/4))*pow(pow(M_E,x-1)/sin(z+2)+2,1.0/3);
	cout.precision(2);
	cout<<fixed<<AF;
	return 0;
}
