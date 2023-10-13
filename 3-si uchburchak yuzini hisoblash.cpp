//Muallif: Abdullox Saidmurodov
//Sana:    26-noyabr 2018-yil
//Maqsad:  tamonlari turlicha bo'lgan uchburchak yuzini geron formulasi orqali hisoblab, natijani verguldan keyin ikkita xonasigacha yaxlitlovchi dastur tuzish

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	float a,b,c,p,s;
	cin>>a>>b>>c;
	
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout<<setprecision(2)<<fixed<<"uchburchak yuzasi s="<<s<<" ga teng";
	
	return 0;
}
