// Muallif: Abdullox Saidmurodov 
// Sana:    27-noyabr 2018-yil
// Maqsad:  arifmetik progressiyaning n ta hadi yig'indisini hisoblovchi dastur tuzish.

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	double a,d,n,S;
	cin>>a>>d>>n;
	
	S=((2*a+d*(n-1))*n)/2;
	
	cout<<"Arifmatig progressiyaning "<<n<<" ta hadi yig'indisi "<<S<<" ga teng";
	
	return 0;
}
