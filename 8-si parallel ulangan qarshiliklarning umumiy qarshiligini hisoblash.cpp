// Muallif: Abdullox Saidmurodov
// Sana:    26-noyabr 2018-yil
// Maqsad:  parallel ulangan qarshiliklarning umimiy qarshiliklarni hiloblovchi dastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float R1,R2,R3,R;
	cin>>R1>>R2>>R3;
	R=(R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
	cout<<"umumiy qarshilik R="<<R;
	
	return 0;
}
