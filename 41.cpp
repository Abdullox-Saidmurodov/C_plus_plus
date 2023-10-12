#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,z;
	cin>>x>>y>>z;
	if(x<1&&y<1&&z<1)
	{
		if(x<y&&x<z)
		{
			x=(y+z)/2;
		}
		else if(y<x&&y<z)
		{
			y=(z+x)/2;
		}
		else
		z=(x+y)/2;
	}
	cout<<x<<" "<<y<<" "<<z;	
	
 	return 0;
} 
