//Muallif: Abdullox Saidmurodov
//Sana:    26-noyabr 2018-yil
//Maqsad:  berilgan natural sonining oxirgi raqamini, birinchi raqamini,raqamlar yig'indisini aniqlovchi dastur tuzish

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,a,b,c;
	cin>>n;
	 if(n>9&&n<100)
	 {
	 	a=n%10;
	 	cout<<"oxirgi raqami: "<<a<<endl;
	 	
	 	b=n/10;
	 	cout<<"birinchi raqami: "<<b<<endl;
	 	
	 	c=a+b;
	 	cout<<"raqamlari yig'indisi: "<<c;
	 	
	 }
	
	return 0;
}
