/*
Muallif: Abdullox Saidmurodov
Sana:    27-noyabr 2018-yil
Maqsad:  paralelepipedning hajmi va to'la sirtini topish
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a,b,c,V,S;
	cin>>a>>b>>c;
	V=a*b*c;
	S=2*(a*b+b*c+c*a);
	
	cout<<"paralelepiped hajmi: "<<V<<endl<<"paralelepiped to'la sirti: "<<S;
	
	return 0;
}
