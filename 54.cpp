#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float x,y,y1,y2;
	cin>>x>>y;
	
	y1=sqrt(4-x*x);
	y2=sqrt(1-x*x);
	if(x>=-2&&x<=2&&y<=y1&&y>=y2)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
	
 	return 0;
}
