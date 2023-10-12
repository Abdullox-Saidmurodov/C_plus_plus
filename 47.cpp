#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float a,y;
	cin>>a;
	if(a<1)
	{
		y=a;
	}
    else if(a>1&&a<2)
    {
    	y=1;
	}
	else if(a>2)
	{
		y=-2*a+5;
	}
	cout<<y;
	
 	return 0;
} 
