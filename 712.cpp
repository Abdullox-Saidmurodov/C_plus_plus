#include<iostream>
#include <vector>
using namespace std;
int main ()
{
	int k,a;
	cin>>k;
	const int n=k;
//	vector<int>massiv(n);
	vector<vector<int> > mass(n);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a;
			mass[i].push_back(a);
		}
	}
	
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<mass[i][j]<<" ";
			}
			cout<<endl;
		}
	
	return 0;
}
}
