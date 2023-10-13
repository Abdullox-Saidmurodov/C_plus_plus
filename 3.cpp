#include <iostream>
using namespace std;
int main ()
{
	int c;
	cin>>c;
	
	if(c%2==0)
	cout<<c/2-1<<" "<<c/2+1;
	else
	cout<<c/2+1<<" "<<c/2;
	return 0;
}
