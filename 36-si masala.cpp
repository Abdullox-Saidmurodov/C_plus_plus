/*
Muallif: Abdullox Saidmurodov
Sana:    12-yanvar 2019-yil
Maqsad:  V1 km/soat va V2 km/soat tezlik bilan harakatlanayotgan ikki avtomobil qarama-qarshi yo'nalishda harakatlayapti, T vaqtdan keyin ular orasidagi masofa S ni aniqlovchi dastur tuzish
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double V1,V2,T,S;
	cin>>V1>>V2>>T;
	
	S=(V1+V2)*T;
	
	cout<<S;
	
	return 0;
}
