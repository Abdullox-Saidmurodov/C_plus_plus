#include <iostream>

using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	int s=0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]<='Z'&&a[i]>='A'||a[i]<='z'&&a[i]>='a'||a[i]==' ')
		s++;
	}
	
	if(a.length()<=500&&a.length()==s)
	{
		for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='A')
		{
			while(a[i]!=' ')
			{
				cout<<a[i];
				i++;
			}
			cout<<endl;
		}
	}
	}

		
	return 0;
}
