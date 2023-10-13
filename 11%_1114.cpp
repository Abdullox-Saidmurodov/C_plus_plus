#include <iostream>
using namespace std;
int main()
{
	int v,t;
	cin>>v>>t;
	
	if(v>=0)
	cout<<(v*t)%109+1;
	else if(v<0)
	cout<<109+((v*t)%109+1);
	
	return 0;
}
