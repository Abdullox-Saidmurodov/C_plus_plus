#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2,y3,y4;
	cin>>x>>y;
	y1=2*x+1;
	y2=-2*x+1;
	y3=-2*x-1;
	y4=2*x-1;
	if(x>=-0.5&&x<=0.5&&y<=y1&&y<=y2&&y>=y3&&y>=y4)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
 	return 0;
}
