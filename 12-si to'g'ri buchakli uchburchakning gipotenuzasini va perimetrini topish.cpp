/*
Muallif: Abdullox Saidmurodov
Sana:    27-noyabr 2018-yil
Maqsad:  to'g'ri burchakli uchburchakning gipotenuzasini va uning perimetrini aniqlovchi dastur tuzish
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a,b,c,P;
	cin>>a>>b;
	c=sqrt(a*a+b*b);
	P=a+b+c;
	cout<<"gipotenuza: "<<c<<endl<<"perimetri: "<<P;
	
	
	return 0;
}
