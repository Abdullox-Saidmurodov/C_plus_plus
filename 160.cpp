#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	int t=0;
	
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==' '||isalpha(a[i]))
		t++;
	}
	
	if(a.length()==t)
	{
	for(int i=0; i<a.length(); i++)
	{
		if(islower(a[i]))
		a[i]=toupper(a[i]);
		else
		if(isupper(a[i]))
		a[i]=tolower(a[i]);		
	}
	cout<<a;		
	}

	
	return 0;
}
