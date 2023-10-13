#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int N,s=0,c=0;
	cin>>N;
	const int k=N;
	int a[k];
	for(int i=0; i<N; i++)
	cin>>a[i];
	
	for(int i=0; i<N; i++)
	{
		if(a[i]==0)
		s++;
		else if(a[i]==1)
		c++;
	}
	if(s>c)
	cout<<c;
	else if(s<c)
	cout<<s;
	
	return 0;
}
