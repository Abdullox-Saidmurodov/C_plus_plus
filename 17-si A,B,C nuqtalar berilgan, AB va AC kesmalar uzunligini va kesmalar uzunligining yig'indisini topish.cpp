/*
Muallif: Abdullox Saidmurodov
Sana:    12-yanvar 2019-yil
Maqsad:  sonlar o'qida A,B,C nuqtalar berilgan, AB va AC kesmalar uzunligini va kesmalar uzunligining yig'indisini aniqlovchi dastur tuzish
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x1,y1,x2,y2,x3,y3,a,b,c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	a=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c=a+b;
	
	cout<<a<<endl<<b<<endl<<c;
	
		return 0;
}
