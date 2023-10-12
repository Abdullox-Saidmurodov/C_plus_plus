#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a,b="";
	int j=0,t=0;
	cin>>a;
	a+=" ";
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==' '&&isalpha(a[i-1]))
		{
			if(b.length()%2==1)
			t++;
			else if(b.length()%2==0)
			j++;
			
			b="";
		}
		else if(a[i]!=' ')
		b+=a[i];
	}
	cout<<t*j;
	
	
	return 0;
}
