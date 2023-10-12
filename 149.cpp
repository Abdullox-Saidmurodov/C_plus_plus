#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string s,a="",b="";
	int q=0,w=0;
	
	getline(cin,s);
	
	for(int i=0; i<s.length(); i++)
	{
		if(isalpha(s[i])||s[i]==' ')
		w++;
	}

	if(s.length()<=500&&s.length()==w)
	{
		for(int i=0; i<s.length(); i++)
		{
			a+=s[i];
			if((s[i]==' '||i==s.length()-1))
			{
				if(s[i]==' '&&s[i-1]=='A'&&s[i-2]=='N')
				{
					b=b+a;
					q++;
				}
				a="";
			}
		}
	}
	cout<<q<<endl<<b;
	
	return 0;
}
