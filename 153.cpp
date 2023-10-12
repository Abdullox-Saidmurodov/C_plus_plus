#include <iostream>#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a,c="",q[101];
	getline(cin,a);
	int j,n,k=0;
	n=a.length();
	a=a+' ';
	for(int i=0; i<n; i++)
	{
		
		if(a[i]==' ')
		{
			q[k]=c;
			k++;
			c="";
		}
		else
		c=c+a[i];
	}
	for(int i=0; i<k; i++)
	{
		j=q[i].find("Info");
		if(j>=0&&j<q[i].length())
		{
			cout<<q[i]<<" ";
		}
	}
	
	return 0;
}

