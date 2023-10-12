#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int N,M,k;
	cin>>N>>M;
	const int q=N, w=M;
	int a[q][w];
	
    for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
		cin>>a[i][j];
	
	cin>>k;
	
	for(int i=0; i<N; i++)
	{
		if(k-1!=i)
		{
				for(int j=0; j<M; j++)
				{
				cout<<a[i][j]<<" ";
    			}
   				 cout<<endl;
		}
	
	}
	
	
	return 0;
}
