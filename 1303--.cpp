#include <iostream>
#include <stack>
using namespace std;
stack<char> ab;
int main ()
{
	char a;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a;
		if(a=='['||a=='{'||'(')
		{
			ab.push(a);
		}
		else
		{
			if(ab.empty())
			ab.push(a);
			else if(a==']'&&ab.top()=='[')
			ab.pop();
			else if(a==']'&&ab.top()=='[')
			ab.pop();
			else if(a==']'&&ab.top()=='[')
			ab.pop();
			else
			ab.push(a);
		}
	}
	if(ab.empty()) cout<<"Yes";
	else cout<<"No";
	return 0;
}
