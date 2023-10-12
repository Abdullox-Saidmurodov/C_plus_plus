#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2,y3;
	cin>>x>>y;
	y1=2*x+3;
	y2=-x;
	y3=(x-1)/3;
	
	if((y<=y1&&y<=y2&&x>=-2&&x<=0||y<=0&&x>=0&&x<=1)&&y>=y3)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
		
 	return 0;
}
