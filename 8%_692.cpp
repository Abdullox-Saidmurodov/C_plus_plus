#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int N;
	double m;
	cin>>N;
	m=N;
	while(m>1)
	{
		m/=2;
	}
	if(m==1)
	cout<<"YES";
	else if(m!=1)
	cout<<"NO";
	
	return 0;
}
