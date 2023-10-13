#include <iostream>
using namespace std;
int main ()
{
	int x;
	cin>>x;
	
	if(x==1)
	cout<<"0";
	else if(x%2)
	cout<<x;
	else
	cout<<x/2;
	
	return 0;
}
