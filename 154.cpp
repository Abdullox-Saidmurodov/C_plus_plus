#include <iostream>
#include <string.h>;
#include <cmath>
using namespace std;
int main ()
{
	string a;
	cin>>a;
	int n=0;
	
	for(int i=0; i<a.length(); i++)
	{
		n+=a[i]-48;
	}
	cout<<n;
	return 0;
}
