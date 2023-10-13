#include <iostream>
using namespace std;
template <typename T>
T maxx(T s,int b)
{
	T w[b];
	for(int i=0; i<b; i++)
	{
		cin>>w[i];
	}
	T q=w[0];
	for(int i=0; i<b; i++)
	{
		if(q<w[i])
		{
			q=w[i];
		}
	}
	return q;
}
main()
{
	int x;
	char d;
	cin>>x;
	cout<<maxx(d,x)<<endl;
//	cout<<"Haqiqiy son "<<maxx(2.5,3.3)<<endl;
//	cout<<"Belgili tur "<<maxx('a','b')<<endl;
//	cout<<"String turi "<<maxx(string("Aziz"),string("Aziza"))<<endl;
	return 0;
}
