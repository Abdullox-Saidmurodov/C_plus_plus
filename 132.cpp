#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int L;
	cin>>L;
	const int l=L;
	int a[l];
	
	for(int q=0; q<L; q++)
	cin>>a[q];
	
	int N,M,q;
	cin>>N>>M;
	const int n=N, m=M;
	int b[n][m];
	
	
	if(N*M<=L)
	{
		q=0;
	    for(int i=0; i<N; i++)
			for(int j=0; j<M; j++)
			{
			    b[i][j]=a[q];
				q++;	
			}
	}
	else if(N*M>L)
	{
			q=0;
	    for(int i=0; i<N; i++)
			for(int j=0; j<M; j++)
			{
				if(q<L)
				{
		  		 b[i][j]=a[q];
	  	  		 q++;	
				}
				else if(q>=L)
				{
					b[i][j]=0;
	  	  		    q++;
				}
			}
		
	}
	
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
	{
	cout<<b[i][j]<<" ";
    }
    cout<<endl;
	}
	
	
	return 0;
}
