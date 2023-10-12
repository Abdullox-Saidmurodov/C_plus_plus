#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2,y3;
	cin>>x>>y;
	y1=-x;
	y2=x;
	y3=-2;
	
	if(((x>=-1&&x<=0&&y<=y1)||(x>=0&&x<=1&&y<=y2))&&y>=y3)
	{
		cout<<"yes";
	}
	else
	cout<<"no";

 	return 0;
} 
