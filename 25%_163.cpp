#include <iostream>
using namespace std;
int main ()
{
	string s;
	cin>>s;
	int f;
	
	if(s[0]=='x'&&s[1]=='+')
	{
		f=s[4]-48-(s[2]-48);
	}
	else if(s[0]=='x'&&s[1]=='-')
	{
		f=s[4]-48+(s[2]-48);
	}
	else if(s[2]=='x'&&s[1]=='+')
	{
		f=s[4]-48-(s[0]-48);
	}
	else if(s[2]=='x'&&s[1]=='-')
	{
		f=s[0]-48-(s[4]-48);
	}
	else if(s[4]=='x'&&s[1]=='-')
	{
		f=s[0]-48-(s[2]-48);
	}
	else if(s[4]=='x'&&s[1]=='+')
	{
		f=s[0]-48+(s[2]-48);
	}
	
	cout<<f;
	
	return 0;
}
