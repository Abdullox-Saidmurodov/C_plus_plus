#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float a,b,c,d;
	cin>>a>>b>>c>>d;
     if(a<=b&&b<=c&&c<=d)
{
		if(a>b&&a>c&&a>d)
	{
		b=a;
		c=a;
		d=a;
	}
	else if(b>a&&b>c&&b>d)
	{
		a=b;
		c=b;
		d=b;
	}
    else if(c>a&&c>b&&c>d)
    {
    	a=c;
    	b=c;
    	d=c;
	}
	else
	{
		a=d; 
		b=d;
		c=d;
	}
cout<<a<<" "<<b<<" "<<c<<" "<<d;
}
else
{
		if(a<b&&a<c&&a<d)
	{
		b=a;
		c=a;
		d=a;
	}
	else if(b<a&&b<c&&b<d)
	{
		a=b;
		c=b;
		d=b;
	}
    else if(c<a&&c<b&&c<d)
    {
    	a=c;
    	b=c;
    	d=c;
	}
	else
	{
		a=d; 
		b=d;
		c=d;
	}
cout<<a<<" "<<b<<" "<<c<<" "<<d;
}
	

 	return 0;
} 
