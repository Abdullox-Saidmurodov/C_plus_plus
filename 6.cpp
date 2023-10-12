#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	double a,b,h,r,R,s,l;
	cin>>a>>b>>h;
	R=a/2.0;
	r=b/2.0;
	l=sqrt((R-r)*(R-r)+h*h);
     s=M_PI*(R*R+r*r+l*(R+r));
		cout.precision(2);
        cout<<fixed<<s;
	
	return 0;
}


