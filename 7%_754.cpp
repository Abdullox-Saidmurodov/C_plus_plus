#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int M1,M2,M3;
	cin>>M1>>M2>>M3;
	
	if(M1>=94&&M1<=727&&M2>=94&&M2<=727&&M3>=94&&M3<=727)
	{
		cout<<max(M1,(max(M2,M3)));
	}
	else
	cout<<"Error";
	
	
	return 0;
}
