// Muallif: Abdullox Saidmurodov 
// Sana:    27-noyabr 2018-yil
// Maqsad:  ikki nuqta orasidagi masofani hisoblovchi dastur tuzish

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	double x1,y1,x2,y2,d;
	cin>>x1>>y1>>x2>>y2;
	
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	cout<<"Nuqtalar orasidagi masofa: "<<d;
	
	return 0;
}
