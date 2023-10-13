#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c;
	char e,r;
	cin>>a;
	cin>>e;
	cin>>b;
	cin>>r;
	cin>>c;
	int u=0,p=0;
	if(a[0]=='x')
	{
		if(e=='+')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<b.length(); i++)
			{
				p=(b[i]-48)+p*10;
			}
			cout<<u-p<<" + "<<b<<" = "<<c;
		}
		else
		if(e=='-')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<b.length(); i++)
			{
				p=(b[i]-48)+p*10;
			}
			cout<<u+p<<" - "<<b<<" = "<<c;
		}
		else
		if(e=='*')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<b.length(); i++)
			{
				p=(b[i]-48)+p*10;
			}
			cout<<u/p<<" * "<<b<<" = "<<c;
		}
		else
		if(e=='/')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<b.length(); i++)
			{
				p=(b[i]-48)+p*10;
			}
			cout<<u*p<<" / "<<b<<" = "<<c;
		}
	}
	else
	if(b[0]=='x')
	{
		if(e=='+')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" + "<<u-p<<" = "<<c;
		}
		else
		if(e=='-')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" - "<<p-u<<" = "<<c;
		}
		else
		if(e=='*')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" * "<<u/p<<" = "<<c;
		}
		else
		if(e=='/')
		{
			for(int i=0; i<c.length(); i++)
			{
				u=(c[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" / "<<p/u<<" = "<<c;
		}
	}
		else
	if(c[0]=='x')
	{
		if(e=='+')
		{
			for(int i=0; i<b.length(); i++)
			{
				u=(b[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" + "<<b<<" = "<<u+p;
		}
		else
		if(e=='-')
		{
			for(int i=0; i<b.length(); i++)
			{
				u=(b[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" - "<<b<<" = "<<p-u;
		}
		else
		if(e=='*')
		{
			for(int i=0; i<b.length(); i++)
			{
				u=(b[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" * "<<b<<" = "<<p*u;
		}
		else
		if(e=='/')
		{
			for(int i=0; i<b.length(); i++)
			{
				u=(b[i]-48)+u*10;
			}
			for(int i=0; i<a.length(); i++)
			{
				p=(a[i]-48)+p*10;
			}
			cout<<a<<" / "<<b<<" = "<<p/u;
		}
	}
	
	
	
	return 0;
}
