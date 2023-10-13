#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	int q,w,e,r;
	cin>>a>>q>>b>>w>>c>>e>>d>>r;
	
	
	if(a+b+c+d>q+w+e+r)
	cout<<"1";
	else if(a+b+c+d<q+w+e+r)
	cout<<"2";
	else if(a+b+c+d==q+w+e+r)
	cout<<"DRAW";
	
	return 0;
}
