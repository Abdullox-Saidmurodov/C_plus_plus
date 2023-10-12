#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float a,y;
	cin>>a;
	if(a>2)
	{
		y=a;
	}
	else if(-1<=a&&a<=2)
	{
		y=a*a;
	}
	else if(a<-1)
	{
		y=-1/a;
	}
	cout.precision(2);
	cout<<fixed<<y;
	
 	return 0;
} 
