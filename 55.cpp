#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b;
	cin>>a>>b;
	const int k=a;
	int d[k];
	
	for(int i=0; i<a; i++)
	{
		cin>>d[i];
	}
	sort(d, d+a);
	
	
	cout<<d[a-b];
	
	
	
	return 0;
}
