#include<iostream>
using namespace std;
int main() {
 
	int n, h, a, totW = 0;
 
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a <= h){
			totW++;
		}else{
			totW += 2;
		}
	}
	cout << totW;
}
