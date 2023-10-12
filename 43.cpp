#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y;
	cin>>x>>y;
	if(x<0&&y<0)
	{
		x=fabs(x);
		y=fabs(y);
		cout<<x<<" "<<y;
	}
	else if(x<0||y<0)
	{
		x=x+0.5;
		y=y+0.5;
		cout<<x<<" "<<y;
	}
	else if(x>0&&y>0)
	{
		cout<<x<<" "<<y;
	}

	
	
 	return 0;
} 
