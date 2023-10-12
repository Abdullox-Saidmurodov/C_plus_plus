#include<iostream>

using namespace std;
int main()
{
	int n,q=0,e=0,r;
	int w=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		q=q*10+i;
		
	for(int j=1;j<=i;j++)
	{
		w=w+q%10;q=q/10;
	}
		if(w%3==0){e++;}
	}
	cout<<e;
	return 0;
}
