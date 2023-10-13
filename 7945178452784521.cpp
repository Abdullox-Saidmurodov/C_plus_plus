#include<iostream>
#include <vector>
using namespace std;
int main ()
{
	int n,a;
	cin>>n;
	vector<int>massiv(n);
	vector<int>::iterator i;
	vector<vector<int> > mass(n);
	vector<vector<int> >::iterator it;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a;
			massiv.push_back(a);
		}
		mass.push_back(massiv);
		massiv.clear();
	}
	
		for(it=mass.begin(); it!=mass.end(); it++)
		{
			for(int i=0; i<n; i++)
			cout<<i<<" ";
		}
	
	return 0;
}
