#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2,y3,y4;
	cin>>x>>y;
	
	y1=sqrt(1-x*x);
	y2=sqrt(0.25-x*x);
	y3=-sqrt(0.25-x*x);
	y4=-sqrt(1-x*x);
	
	if((x>=-1&&x<=-0.5&&(y<=y1&&y>=y2||y<=y3&&y>=y4))||((y<=y1&&y>=y2||y<=y3&&y>=y4)&&x>=0.5&&x<=1))
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
 	return 0;
}
