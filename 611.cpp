#include <iostream>
using namespace std;
template <typename T>
T maxx(T a, T b)
{
	if(a>b) return a;
	else return b;
}
main()
{
	cout<<"Butun son "<<maxx(2,2)<<endl;
	cout<<"Haqiqiy son "<<maxx(2.5,3.3)<<endl;
	cout<<"Belgili tur "<<maxx('a','b')<<endl;
	cout<<"String turi "<<maxx(string("Aziz"),string("Aziza"))<<endl;
	return 0;
}
