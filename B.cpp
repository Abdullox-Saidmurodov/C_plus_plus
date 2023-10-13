#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string r,g,b,q="Red",w="Green",e="Blue";
	cin>>r>>g>>b;
	if(r==q&&g==q||g==q&&b==q||b==q&&r==q||r==q&&g==q&&b==q)
	cout<<"Red";
	else if(r==e&&g==e||g==e&&b==e||b==e&&r==e||r==e&&g==e&&b==e)
	cout<<"Blue";
	else if(r==w&&g==w||g==w&&b==w||b==w&&r==w||r==w&&g==w&&b==w)
	cout<<"Green";
	return 0;
}
