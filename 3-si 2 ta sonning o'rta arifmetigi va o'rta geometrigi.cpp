// Muallif: Abdullox Saidmurodov
// Sana:    26-noyabr 2018-yil
// Maqsad:  2 ta haqiqiy sonning o'rta arifmetigi va o'rta geometrigini aniqlovchi dastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a,b,arif,geo;
	cin>>a>>b;
	
	arif=(a+b)/2;
	geo=sqrt(a*b);
	
	cout<<"urta arifmetigi arif="<<arif<<endl;
	cout<<"urta geometrigi geo="<<geo<<endl;
		
	return 0;
}
