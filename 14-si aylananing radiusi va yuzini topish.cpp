/*
Muallif: Absullox Saidmurodov
Sana:    27-noyabr 2018-yil
Maqsad:  aylananing uzunligi berilgan uning radiusi va yuzini aniqlovchi dastur tuzish
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float L,R,S,pi;
	cin>>L;
	pi=3.14;
	R=L/(2*pi);
	S=pi*R*R;
	cout<<"aylana radiusi: "<<R<<endl<<"aylana yuzi: "<<S;
	
	
	
	return 0;
}
