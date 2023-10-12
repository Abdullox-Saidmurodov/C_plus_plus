#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float a,y;
	cin>>a;
	if(a<=-1)
	{
		y=-a-1;
	}
	else if(a>=-1&&a<=0)
	{
		y=a+1;
	}
	else if(a>=0&&a<=1)
	{
		y=-a+1;
	}
	else if(a>=1)
	{
		y=a-1;
	}
	cout.precision(2);
	cout<<fixed<<y;
 	return 0;
} 
