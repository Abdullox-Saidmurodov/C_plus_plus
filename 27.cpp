#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,AA;
	cin>>x;
	
	AA=sqrt((2*tan(x+2)-cos(x+pow(2,x)))/(1+cos(x+2)*cos(x+2)))+(sin(x*x)/(x*x+3));
	cout.precision(2);
	cout<<fixed<<AA;
	
	return 0;
}
