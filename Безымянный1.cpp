#include <bits/stdc++.h>
using namespace std;
int main ()
{
	double x0,y0,k1,k2,b1,b2,y1,y2,y3;
	cin>>x0>>y0;
		
		k1=3;
		b1=2;
		k2=-3;
		b2=2;
		y1=k1*x0+b1;
		y2=k2*x0+b2;
		y3=-1;
		if(y1>=y0&&y2>=y0&&y0>=y3)
		{
			cout<<"yes";
		}
	else
	cout<<"no";
	return 0;
}
