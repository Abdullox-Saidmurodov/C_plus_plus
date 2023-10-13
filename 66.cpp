#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,x1,x2,y1,y2;
	cin>>a>>x1>>y1>>x2>>y2;
	if((abs(x2-x1)==1&&abs(y2-y1)==2)||(abs(x2-x1)==2&&abs(y2-y1)==1))
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}
