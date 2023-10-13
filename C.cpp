#include <iostream>
#include <math.h>
using namespace std;
int a1,a2,a3,a4,b;
int main ()
{
	cin>>a1>>a2>>a3>>a4>>b;
	if(b==0)
	{
		cout<<"yes";
	}
	else if(max(a1,(max(a2,max(a3,a4))))>=b)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
	return 0;
}
