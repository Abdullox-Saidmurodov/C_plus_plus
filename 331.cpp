#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
class talaba
{
	public:
	string nomi;
	int ball;
};
int main()
{
    int n,m,summa,b;
    cin>>n>>m;
    talaba a[10];
    string s,l;
    for(int i=0; i<n; i++)
    {
    	summa=0;
    	for(int j=0; j<m; j++)
    	{
    		cin>>b;
    		summa+=b;
		}
		a[i].ball=summa;
		cin>>s;
		a[i].nomi=s;
	}
	int maxx=a[0].ball;
	for(int i=0; i<n; i++)
	{
		if(maxx<a[i].ball)
		{
			maxx=a[i].ball;
			l=a[i].nomi;
		}
	}
		  cout<<maxx<<" "<<l;  
    return 0;
}
