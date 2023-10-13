// Muallif: Abdullox Saidmurodov
// Sana:    26-noyabr 2018-yil
// Maqsad:  temperaturalari va hajmlari turlicha bo'lgan suvlarni aralashmasidan hosil bo'lgan suvning hajmi va temperaturasini aniqlovchi dastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main () {hh
	float t1,V1,t2,V2,t,V;
	cin>>t1>>V1>>t2>>V2;

	t=((V1+V2)*t2+V1*t1)/(2*V1+V2);
	V=V1+V2;

	cout<<"aralashmaning temperaturasi t="<<t<<endl;
	cout<<"hosil bo'lgan suvning hajmi V="<<V;

	return 0;
}
