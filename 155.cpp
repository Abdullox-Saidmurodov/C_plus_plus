#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a,c="";
	getline(cin,a);
	int n,k=0;
	
	a+=" ";
	n=a.length();
	c+=a[0];
	
	for(int i=1; i<n; i++)
	{
		
		if(a[i]==' '&&a[i-1]!=' ')
		{
			if(isupper(c[0]))
			k++;
			
			c="";
		}
		else
		c=c+a[i];
	}
	
	cout<<k;
	
	return 0;
}

