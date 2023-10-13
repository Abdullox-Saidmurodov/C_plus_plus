#include <iostream>
using namespace std;
int d;
template <typename T>
void tt(T a, T c)
{
	t q;
	q=a;
	a=c;
	c=
	`*-/-/*//*-*-****/*/*/----************************************************************-**
}
int main ()
{
	cout<<"-> massiv elementlari sonini kiriting: ";
	int b;
	cin>>b;
	d=b;
	const int k=b;
	
	cerr<<endl<<endl;
	cout<<":)  int turidagi massiv elementlarini kiriting: ";
	int a,c;
	cin>>a>>c;
	cerr<<endl;
	tt(a,c);
    
    cerr<<endl<<endl<<endl;
	cout<<":)  double turidagi massiv elementlarini kiriting: ";
	double u[k],p;
	for(int i=0; i<b; i++)
	{
		cin>>u[i];
	}
	cerr<<endl;
	cout<<"--> tartib raqamini topish kerak bo'lgan elementini kiriting: ";
	cin>>p;
	cerr<<endl;
	tt(u,p);
	
	cerr<<endl<<endl<<endl;
	cout<<":)  string turidagi massiv elementlarini ya'ni satrlarni kiriting: ";
	cout<<endl;	
	string v[k],n;
	for(int i=0; i<b; i++)
	{
		cin>>v[i];
	}
	cerr<<endl;
	cout<<"--> tartib raqamini topish kerak bo'lgan satrni kiriting: ";
	cin>>n;
	cerr<<endl;
	tt(v,n);
	
	return 0;
}
