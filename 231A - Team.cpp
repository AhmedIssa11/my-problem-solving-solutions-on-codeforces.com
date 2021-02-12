
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
 
	int n, p, v, t, ct = 0;
	cin >> n;
	
	while (n--) {
 
		cin >> p >> v >> t;
		if (p + v + t > 1)
		{
			ct++;
		}	
	}
	cout << ct;
}
