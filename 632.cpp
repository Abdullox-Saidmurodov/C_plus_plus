#include<iostream>
using namespace std;
template <typename T>
class stack
{
	public:
		int size;
		T element[100];
		stack()
		{
			size=0;
		}
		bool bush()
		{
			return size==0;
		}
		void kiritish(T value)
		{
			element[size++]=value;
		}
		T chiqarish()
		{
			return element[--size];
		}
};
int main()
{
	stack<int> son;
	int n;
	cin>>n;
	const int k=n;
	int a[k];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		son.kiritish(a[i]);
	}
	while(!son.bush())
	{
		cout<<son.chiqarish()<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
