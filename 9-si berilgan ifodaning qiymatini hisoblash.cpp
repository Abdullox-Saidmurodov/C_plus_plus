// Muallif: Abdullox Saidmurodov
// Sana:    26-noyabr 2018-yil
// Maqsad:  ikkita haqiqiy sonlar berilgan ularni berilgan ifoda orqali hisoblovchi dastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float x,y,c;
	cin>>x>>y;
	
	c=(fabs(x)-fabs(y))/(1+fabs(x*y));
	cout<<"ifodaning qiymati "<<c;
	
	return 0;
}
