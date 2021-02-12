#include<iostream>
using namespace std;
void main()
{
	int NumM,*x,ctM=0;
 
	cin>>NumM;
	x = new int[NumM];
 
	for(int i=0; i<NumM;i++)
	{
		cin>>x[i];
	}
 
	for(int i=0; i<NumM;i++)
	{
		if(x[i] != x[i+1])
		{
			ctM++;
		}
	}
 
 
	cout<<ctM;
}
