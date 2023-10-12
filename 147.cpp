#include <iostream>

using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	int s=0,c=0,b=0;
	
		for(int i=0; i<a.length(); i++)
	{
		if(a[i]>='A'&&a[i]<='Z'||a[i]==' ')
		b++;
	}
	
	if(a.length()<=500&&b==a.length())
	{
		for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='A')
		s++;
		
		if(a[i]=='Y')
		c++;
	}
	cout<<s<<endl<<c;	
	}
		
	return 0;
}
