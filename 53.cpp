#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2,y3,y4;
	cin>>x>>y;
	y1=1.5;
	y2=1;
	y3=-x;
	y4=x;
	
	if(((x>=-2&&x<=-1&&y>=y2&&y<=y1)||(x>=-1&&x<=0&&y>=y3&&y<=y1))||((x>=0&&x<=1&&y>=y4&&y<=y1)||(x>=1&&x<=2&&y>=y2&&y<=y1)))
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
	
 	return 0;
}
