#include<iostream>
using namespace std;
void main()
{
	int i,a,b;
	cin>>a>>b;
 
	for(i=1;   ;i++)
	{
		a*=3;
		b*=2;
		if(a>b)
		{
			break;
		}
	}
	cout<<i;
}
