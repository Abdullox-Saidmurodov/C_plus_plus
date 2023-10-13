#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s,d,a,b;
	cin>>s>>d;
	char q;
	int t=0;
	a=s;
	b=d;
	
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			t=1; break;
		}
	}
	for(int i=0; i<d.length(); i++)
	{
		if(d[i]>='A'&&d[i]<='Z')
		{
			t=1; break;
		}
	}
	
	if(t==1)
	{
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	if(a[a.length()-1]>b[b.length()-1])
	q=a[a.length()-1];
	else
	q=b[b.length()-1];
	
	}
	
	
	
	
	return 0;
}
