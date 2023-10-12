#include <iostream>
#include <string.h>

using namespace std;
int main ()
{
	string a,b="";
	getline(cin,a);
	int t=0;
	a+=" ";
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==' '&&isalpha(a[i-1]))
		{
			if(b[0]=='a'&&b[b.length()-1]=='b')
			t++;
			
			
			b="";
		}
		else if(a[i]!=' ')
		b+=a[i];
	}
	cout<<t;
	
	
	return 0;
}
