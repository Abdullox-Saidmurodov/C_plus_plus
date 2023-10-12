#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a,b="Info",c="";
	getline(cin,a);
	int j,n,m;
	n=a.length();
	m=b.length();
	a=a+' ';
	for(int i=0; i<n; i++)
	{
		
		if(a[i]==' ')
		{
			j=c.find(b);
			if(j>=0&&j<c.length())
			{
				cout<<c<<" ";
				
			}
		c="";
		}
		else
		c=c+a[i];
	}
	
	return 0;
}
