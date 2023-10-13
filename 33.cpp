#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	if(a==c&&(abs(b-d)!=1))
	cout<<abs(b-d);
	else
	if(a==c&&(abs(b-d)==1))
	cout<<"3";
	else
	if(b==d&&(abs(a-c)!=1))
	cout<<abs(a-c);
	else
	if(b==d&&(abs(a-c)==1))
	cout<<"3";
	
	
	return 0;
}
