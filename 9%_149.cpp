#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int N;
	cin>>N;
	int a[1000];
	
	for(int i=0; i<N; i++)
	cin>>a[i];
	
	for(int i=N-1; i>=0; i--)
	cout<<a[i]<<" ";
	
	return 0;
}
