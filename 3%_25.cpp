#include <iostream>
using namespace std;
int x;

void ds(int a,int b)
{
	if(a>b)
	x=1;
	else if(a<b)
	x=2;
	else
	x=3;
}
int main ()
{
	int n,m;
	cin>>n>>m;
	ds(n,m);
	
	if(x==1)
	{
		cout<<">";
	}
	else if(x==2)
	cout<<"<";
	else if(x==3)
	cout<<"=";
	
	return 0;
}
