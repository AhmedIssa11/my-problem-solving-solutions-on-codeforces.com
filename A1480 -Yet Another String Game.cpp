#include<iostream>
#include<string>
using namespace std;

int main() {

	int num;
	string str;
	cin >> num;
	for (int tt = 0; tt < num; tt++)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'a')
			{
				str[i] = 'b';
			}
			else
			{
				str[i] = 'a';
			}

			i++;

			if (str[i] == 'z')
			{
				str[i] = 'y';
			}
			else
			{
				str[i] = 'z';
			}
		}
		cout << str << endl;
	}
}
