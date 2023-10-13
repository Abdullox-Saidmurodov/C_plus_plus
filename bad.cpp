#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int x=0,y;
	if(a.length()==1)
	{
		x=a[0]-48;
		if(x%4==0)
		cout<<"YES";
		else
		cout<<"NO";
	}
	if(a.length()>=2)
	{
		x=(a[a.length()-2]-48)*10+(a[a.length()-1]-48);
		if(x%4==0)
		cout<<"YES";
		else
		cout<<"NO";
	}
	
	
}
