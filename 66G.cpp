#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int a,b,c;
	cin>>a>>b>>c;
	
	
	if(a==b&&b==c&&c==a)
	cout<<"teng tomonli o'tkir burchakli uchburchak";
	else
	if(((a*a+b*b)==c*c)||((a*a+c*c)==b*b)||((c*c+b*b)==a*a))
	cout<<"har xil tomonli to'g'ri burchakli uchburchak";
	else
	if(((a*a+b*b)>c*c)&&((a*a+c*c)>b*b)&&((c*c+b*b)>a*a))
	{
		if(a==b||b==c||c==a)
		cout<<"teng yonli o'tkir burchakli uchburchak";
		else
	    cout<<"har xil tomonli o'tkir burchakli uchburchak";
	}
	else
	if(((a*a+b*b)<c*c)||((a*a+c*c)<b*b)||((c*c+b*b)<a*a))
	{
		if(a==b||b==c||c==a)
		cout<<"teng yonli o'tmas burchakli uchburchak";
		else
	    cout<<"har xil tomonli o'tmas burchakli uchburchak";
	}
	
	return 0;
}
