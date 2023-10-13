/*
Muallif: Abdullox Saidmurodov
Sana:    27-noyabr 2018-yil
Maqsad:  aylananing yuzasi berilgan, uning diametri va radiusini aniqlovchi dastur tuzish
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float S,d,R,pi;
	pi=3.14;
	cin>>S;
	R=sqrt(S/pi);
	d=2*R;
	cout<<"aylana diametri: "<<d<<endl<<"aylana radiusi:  "<<R;
	
	return 0;
}
