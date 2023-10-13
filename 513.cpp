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
int max(int *a, int b)
{
	int j=*a;
	for(int i=0; i<b; i++)
	{
		if(j<a[i])
		{
			j=a[i];
		}
	}
	return j;
}
int min(int *a, int b)
{
	int j=*a;
	for(int i=0; i<b; i++)
	{
		if(j>a[i])
		{
			j=a[i];
		}
	}
	return j;
}
int sort(int *a, int b)
{
	int *j,k;
	for(int i=0; i<b; i++)
	{
		*j=*(a+i);
		for(int l=i+1; l<b; l++)
		{
			if(*(a+l)<*j)
			{
				k=l;
				*j=*(a+l);
			}
			swap(*(a+i),*(a+k));
		}
	}
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
//	int *p=reverse(list,6);
//	int min=*p,max=*(p+5);
//	printarr(p,6);
	cout<<sort(list,6);
	return 0;
}
