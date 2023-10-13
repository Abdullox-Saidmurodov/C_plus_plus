#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int W,H,R;
	cin>>W>>H>>R;
	
	if(min(W,H)/2>=R)
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}
