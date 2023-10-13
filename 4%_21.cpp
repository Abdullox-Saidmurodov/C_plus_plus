#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,b,c,x,y;
	cin>>a>>b>>c;
	x=max(a,(max(b,c)));
	y=min(a,(min(b,c)));
	
	cout<<x-y;
	
	return 0;
}
