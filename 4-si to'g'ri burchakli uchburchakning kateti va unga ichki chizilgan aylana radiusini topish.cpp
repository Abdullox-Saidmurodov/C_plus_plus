//Muallif: Abdullox Saidmmurodov
//Sana:    27-noyabr 2018-yil
//Maqsad:  to'g'ri b;urchakli uchburchak kateti va unga ichki chizilgan aylana radiusini hisoblovchindastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a,b,c,r;
	cin>>c>>a;
	b=sqrt(c*c-a*a);
	cout<<"to'g'ri burchakli uchburchak kateti "<<b<<" ga teng."<<endl;
	
	r=(a+b+c)/(a*b);
	cout<<"unga ichki chizilgan aylana radiusi "<<r<<" ga teng.";
	
	return 0;
}
