#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>

string ss(string c)
{
	string a="",b,x,y="",t;
	int d,f,g,k=0,l=0,q;
	
		for(int i=0; i<c.length(); i++)
		{
			if(isdigit(c[i]))
			{
				a=a+c[i];
				
			}
			else
			{
				q=i+1;
				break;
			}
		}
				while(q<c.length())
				{
					y=y+c[q];
					q++;
				}
				int o=0,z=10;
			for(int i=0; i<y.length(); i++)
			{
				o=(y[i]-48)+o*z;
			}
			
	for(int p=0; p<o; p++)
	{
		g=0;
		b=x;
		x="";
	if(a.length()>=b.length())
	{
	f=a.length();
	k=a.length()-b.length();
	
	for(int i=0; i<k; i++)
	{
		b="0"+b;
	}
	}
	else
	{
	f=b.length();
	l=b.length()-a.length();
	
		for(int i=0; i<l; i++)
	{
		a="0"+a;
	}
	}
	for(int i=f-1; i>=0; i--)
	{
		d=(a[i]-48)+(b[i]-48)+g;
		f=d%10;
		g=d/10;
		t=f+48;
		x=t+x;
	}
	if(g)
	{
		t=g+48;
		x=t+x;
	}	
    }
    	if(!o)
	cout<<y;
	else
	cout<<x;
	return x;
	
}
using namespace std;
int main ()
{
	string c;
	
	cin>>c;
	
	cout<<ss(c);	
    
	
	return 0;
}
