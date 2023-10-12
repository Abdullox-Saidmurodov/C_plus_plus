#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	int j=0,s=0;
	
	for(int i=0; i<a.length(); i++)
	{
	if(isalpha(a[i])||a[i]==' ')
	j++;	
	}
	
	if(a.length()==j)
	{
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='A'||a[i]=='a'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u'||a[i]=='E'||a[i]=='e')
			{
				s++;
			}
		}
	}
	cout<<s;
	
	return 0;
}#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	int j=0,s=0;
	
	for(int i=0; i<a.length(); i++)
	{
	if(isalpha(a[i])||a[i]==' ')
	j++;	
	}
	
	if(a.length()==j)
	{
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='A'||a[i]=='a'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u'||a[i]=='E'||a[i]=='e')
			{
				s++;
			}
		}
	}
	cout<<s;
	
	return 0;
}
