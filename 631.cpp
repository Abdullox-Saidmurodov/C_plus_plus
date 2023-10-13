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
			cout<<size<<"//"<<endl;
			element[size++]=value;
			cout<<size<<"**"<<element[0]<<endl;
		}
		T chiqarish()
		{
			return element[--size];
		}
};
int main()
{
	stack<int> son;
	for(int i=9; i>=1; i--)
		son.kiritish(i);
	while(!son.bush())
	{
		cout<<son.chiqarish()<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
