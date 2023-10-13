/*
Muallif: Abdullox Saidmurodov
Sana:    27-noyabr 2018-yil
Maqsad:  ikkita aylananing yuzlarini va ularning yuzlari ayirmasini topuvchi dastur tuzish
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float R1,R2,S1,S2,S3;
	cin>>R1>>R2;
	if(R1>R2)
	{
	S1=M_PI*R1;
	S2=M_PI*R2;
	S3=M_PI*(R1-R2);
	cout<<"birinchi aylana yuzi: "<<S1<<endl<<"ikkinchi aylana yuzi: "<<S2<<endl<<"ularning yuzlarining ayirmasi: "<<S3;
}
	return 0;
}
