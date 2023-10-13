/*
Muallif: Abdullox Saidmurodov
Sana:    12-yanvar 2019-yil
Maqsad:  X kg konfet A so'm turadi. 1 kg va Y kg konfet qancha turishi aniqlovchi dastur tuzish
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double X,A,Y,a,b;
	cin>>X>>A>>Y;
	
	a=A/X;
	b=A*Y/X;
	
	cout<<a<<endl<<b;
	
		return 0;
}
