#include<iostream>
#include<vector>
using namespace std;
 
int main() {
	vector<int> colVec;
	int n, a, j, temp = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		colVec.push_back(a);
	}
 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (colVec[i] > colVec[j])
			{
				temp = colVec[i];
				colVec[i] = colVec[j];
				colVec[j] = temp;
			}
		}
	}
	
 
	for (int i = 0; i < colVec.size(); i++) {
		cout << colVec[i] << endl;
	}
}
