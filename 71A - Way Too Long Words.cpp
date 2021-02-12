#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int n;
	string str;
	vector<string> strVec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str.size() > 10)
		{
		    long long size = str.size() - 2;
			str = str[0] + to_string(size) + str[str.size() - 1];
			strVec.push_back(str);
		}
		else
		{
			strVec.push_back(str);
		}
	}
 
	for (int i = 0; i < strVec.size(); i++) {
		cout << strVec[i] << endl;
	}
}
