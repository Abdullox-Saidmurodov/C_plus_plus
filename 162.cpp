#include <iostream>
#include <string>
using namespace std;
int main ()
{
	
	
	int n;
	string a,b="";
	cin>>n;
	
	
	for(int i=0; i<n; i++)
	{
		if(a[i]!='$')
		{
			b+=a[i];
		}
	}
	
	cout<<b;
	
	return 0;
}
