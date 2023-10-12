#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2;
	cin>>x>>y;
	y1=x/2;
	y2=sqrt(1-x*x);
	
	if((x>0&&x<=1&&((y<=y1&&y>=0)||(y<=0&&y>=y2)))||(x>=-1&&x<=0&&y<=y2&&y>=y2))
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
	
 	return 0;
}
