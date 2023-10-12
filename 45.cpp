#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b,c;
	double x1,x2,D;
	cin>>a>>b>>c;
	if(a!=0)

	{
	D=b*b-4.0*a*c;
		if(D>=0)
		{
			x1=(-b+sqrt(D))/(2.0*a);
			x2=(-b-sqrt(D))/(2.0*a);
			cout.precision(2);
			cout<<fixed<<x1<<" "<<x2;
		}
		else
		cout<<"NO";
		
	}
	
	
 	return 0;
} 
