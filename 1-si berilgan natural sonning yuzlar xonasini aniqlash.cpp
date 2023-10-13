//Muallif: Abdullox Saidmurodov
//Sana:    26-noyabr 2018-yil
//Maqsad:  berilgan natural sonning yuzlar xonasini aniqlovchi dastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,x;
	cin>>n;
	if(n<1000&&n>99)
	{
	x=(n%1000)/100;
	cout<<"yuzlar xonasi "<<x<<" ga teng";
}
	return 0;
}
