#include <iostream>
using namespace std;
int main ()
{
	int n,k,y;
	cin>>n>>k;
	double x,z;
	x=(n*k)/100.0;
	y=x;
	z=y;
	if(z==x)
	cout<<"NO";
	else if(z!=x)
	cout<<"YES";
	
	return 0;
}
