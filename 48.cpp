#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float a,y;
	cin>>a;
	
	if(a<=0)
	{
		y=-a;
	}
	else if(a>0)
	{
		y=-a*a;
	}
	cout.precision(2);
	cout<<fixed<<y;
	
 	return 0;
} 
