#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b&&b>=c)
	{
		cout<<2*a<<" "<<2*b<<" "<<2*c;
	}
	else
	cout<<abs(a)<<" "<<abs(b)<<" "<<abs(c);
	
 	return 0;
} 
