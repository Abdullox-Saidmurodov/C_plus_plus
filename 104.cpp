#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int n,min;
	cin>>n;
	const int k=n;
	int a[k];

	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	min=a[1];
	for(int i=2; i<n; i++)
	{
	if(min>a[i])
	{
		min=a[i];
	}
    }
    	for(int i=1; i<=n; i++)
    	{
    		if(min==a[i])
    		{
    			a[i]=a[n];
    			
			}
			
		}
		 a[n]=min;
		for(int i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
	}
		
	return 0;
}
