#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double n,k=0;
	cin>>n;
    for(int i=1; i<=n; i++)
{
	k+=i;
}
    cout.precision(0);
	cout<<fixed<<k;	

	return 0;
}
