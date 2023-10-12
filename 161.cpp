#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string a="",b="ASSALOM";
	unsigned int x;
	cin>>x;
	const int k=x;
	
	char q[k];
	for(int i=0; i<x; i++)
	cin>>q[i];
	
	for(int i=0; i<b.length(); i++)
	{
		for(int j=0; j<x; j++)
		{
			if(b[i]==q[j])
			{
				a+=q[j];
				break;
			}
		}
	}
	if(a==b)
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}
