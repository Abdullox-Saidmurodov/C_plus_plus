#include <iostream>
using namespace std;
int main()
{
	unsigned int a,s;
	cin>>a>>s;
	
	if(s%a==0)
	cout<<s/a<<" "<<s%a<<" "<<0;
	else
	cout<<s/a<<" "<<s%a<<" "<<a-s%a;
	
	return 0;
}
