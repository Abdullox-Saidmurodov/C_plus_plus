#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
T maxx(T a[], int b)
{
	T q=a[0];
	for(int i=0; i<b; i++)
	{
		if(q<a[i])
		{
			q=a[i];
		}
	}
	return q;
}
main()
{
	int a[10],b=10;
	for(int i=1; i<b; i++)
	cin>>a[i];
	
	cout<<"Butun tur "<<endl<<maxx(a,b)<<endl;
//	cout<<"Haqiqiy son "<<maxx(2.5,3.3)<<endl;
//	cout<<"Belgili tur "<<maxx('a','b')<<endl;
//	cout<<"String turi "<<maxx(string("Aziz"),string("Aziza"))<<endl;
	return 0;
}
