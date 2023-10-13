/*
Muallif: Abdullox Saidmurodov
Sana:    12-yanvar 2019-yil
Maqsad:  Qayiq V km/soat, daryo oqim tezligi U km/soat,(V>U). Qayiqning daryo oqimi bo'yicha harakatlanish vaqti T1, oqimga qarshi T2. Qayiqni yurgan S yo'lini aniqlovchi dastur tuzish
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double V,U,T1,T2,S;
	cin>>V>>U>>T1>>T2;
	
	S=V*(T1+T2)+U*(T1-T2);
	
	cout<<S;
	
	return 0;
}
