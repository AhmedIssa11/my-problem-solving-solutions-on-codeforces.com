#include<iostream>
#include<string>
using namespace std;
void main()
{
	int NumG,ctA=0,ctD=0;
	string S;
 
	cin>>NumG;
	cin>>S;
 
	for(int i=0;i<NumG;i++)
	{
		if(S[i] == 'A')
		{
			ctA++;
		}
		else
		{
			ctD++;
		}
	}
 
	if(ctA>ctD)
	{
		cout<<"Anton";
	}
	if(ctA<ctD)
	{
		cout<<"Danik";
	}
	if(ctA==ctD)
	{
		cout<<"Friendship";
	}
}
