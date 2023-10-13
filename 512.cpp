#include <iostream>
#include <algorithm>
using namespace std;
int *reverse(int *list, int size)
{
	int *result=new int[size];
	for(int i=0, j=size-1; i<size; i++,j--)
	result[i]=list[j];
	sort(result, result+size);
	return result;
}
void printarr(int*list, int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<list[i]<<endl;
	}
}
int main ()
{
	int list[]={3,4,5,6,1,9};
	int *p=reverse(list,6);
	int min=*p,max=*(p+5);
//	printarr(p,6);
	cout<<min<<" "<min;
	return 0;
}
