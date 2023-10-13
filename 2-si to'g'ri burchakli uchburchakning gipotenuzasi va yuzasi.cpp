// Muallif: Saidmodov Abdullox
// Sana:    25-noyabr 2018-yil
// Maqsad:  To'g'ri burchakli uchburchak gipotenuzasi va uning yuzini hisoblovchi dastur

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c,S;
	cin>>a>>b;
	       
	c=sqrt(pow(a,2)+pow(b,2));
	
	S=a*b/2;
	
	cout<<"gipotenuzasi c="<<c<<endl;
	cout<<"yuzasi S="<<S<<endl;
	
	return 0;
}
