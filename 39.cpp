#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int x,y,c;
	cin>>x>>y;
	if(x<y)
	{
	c=x;
	double x=(c+y)/2;
	y=c*y;
	cout<<x<<" "<<y;	
	}
	else
	{
		c=y;
		double y=(x+c)/2;
		x=x*c;
		cout<<x<<" "<<y;
	}

	
 	return 0;
} 
