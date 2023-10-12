#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double s1,s2,s3,r1,r2,r3;
	cin>>r1>>r2>>r3;
	
	
		s1=M_PI*r1*r1;
		s2=M_PI*r2*r2;
		s3=M_PI*r3*r3;
		cout.precision(2);
        cout<<fixed<<s1<<" "<<s2<<" "<<s3;
	
	return 0;
}

