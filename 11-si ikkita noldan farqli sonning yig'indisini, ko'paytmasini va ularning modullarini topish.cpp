/*
Muallif: Abdullox Saidmurodov
Sana:    27-noyabr 2018-yil
Maqsad:  ikkita noldan farqli sonning yig'indisini, ko'paytmasini va har birining modullarini aniqlovchi dastur tuzish
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a,b;
	cin>>a>>b;
	
	if(a!=0&&b!=0)
	cout<<"yig'indisi: "<<a+b<<endl<<"ko'paytmasi: "<<a*b<<endl<<"Har birining modullari: "<<endl<<fabs(a)<<endl<<fabs(b);
	
	
	return 0;
}
