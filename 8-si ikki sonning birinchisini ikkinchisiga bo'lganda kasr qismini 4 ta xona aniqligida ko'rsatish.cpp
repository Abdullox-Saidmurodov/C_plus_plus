// Muallif: Abdullox Saidmurodov
// Sana:    27-noyabr 2018-yil
// Maqsad:  berilgan ikkita sonning birinchisini ikkinchisiga bo'lib kasr qismini verguldan keyin 4 ta xonasigacha ko'rsatuvchi dastur tuzish

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main ()
{
	float A,B,d;
	cin>>A>>B;
    int c=A/B;
    cout.precision(4);
    d=A/B-c;
	cout<<A<<" sonini "<<B<<" soniga boglandagi kasr qismining vetguldan keyingi 4 ta xonasi "<<d*10000<<" ga teng";
	
	
	return 0;
}
