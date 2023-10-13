#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <ctime>
using namespace std;

int main ()
{
	int n=52;
	string kz[4]={"Chillak","G'isht","Tappon","Qarg'a"};
	string km[13]={"Tuz","2","3","4","5","6","7","8","9","10","Valet","Dama","Karol"};
	vector<int>karta(n);
	for(int i=0; i<n; i++)
	karta[i]=i;
	srand(time(0));
	for(int i=0; i<n; i++)
	{
		int ind=rand()%n;
		int t=karta[i];
		karta[i]=karta[ind];
		karta[ind]=t;
	}
	for(int i=0; i<n; i++)
	cout<<km[karta[i]%13]<<" "<<kz[karta[i]/13]<<endl;
	
	
	return 0;
}
