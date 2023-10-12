#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2,y3,y4;
	cin>>x>>y;
	y1=x/2+1;
	y2=-x/2-1;
	y3=sqrt(1-x*x);
	y4=-sqrt(1-x*x);
	
	if((x>=-2&&x<=0&&y<=y1&&y>=y2)||(x>=0&&x<=1&&y<=y3&&y>=y4))
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
 	return 0;
}
