#include <iostream>
using namespace std; 
int main ()
{
	string x,y[500];
	int i,j,u=0;
	getline(cin,x);
	cin>>i>>j;
	x+=" ";
	y[u]="";
	for(int h=0; h<x.length(); h++)
	{
		
		y[u]+=x[h];
		if(x[h]==' ')
		{
			u++;
			y[u]="";
		}
		
	}
	swap(y[i-1],y[j-1]);
	for(int g=0; g<=u; g++)
	{	
		cout<<y[g];
	}
	
	
	return 0;
}
