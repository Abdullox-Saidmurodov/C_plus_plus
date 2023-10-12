#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,z,t;
	cin>>x>>y>>z;
	t=x+y+z;
	if(t>x&&t>y&&t>z)
	{
		cout<<t<<" ";
	}
	else if(x>y&&x>z&&x>t)
	{
		cout<<x<<" ";
	}
	else if(y>x&&y>z&&y>t)
	{
		cout<<y<<" ";
	}
	else if(z>x&&z>x&&z>t)
	{
		cout<<z<<" ";
	}
	
	t=x+y/2;
	if(t<x&&t<y&&t<z)
	{
		cout<<t*t<<" ";
	}
	else if(x<y&&x<z&&x<t)
	{
		cout<<x*x<<" ";
	}
	else if(y<x&&y<z&&y<t)
	{
		cout<<y*y<<" ";
	}
	else if(z<x&&z<x&&z<t)
	{
		cout<<z*z<<" ";
	}
	
	
 	return 0;
} 
