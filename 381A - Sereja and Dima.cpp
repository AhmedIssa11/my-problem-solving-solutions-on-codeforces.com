#include<iostream>
using namespace std;

int main() {

	int n,*a;
	int i = 0,max, k = 0;
	int playS = 0, playD = 0;

	cin >> n;
	int  j = n - 1;
	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	while (i <= j)
	{
		if (a[i] >= a[j])
		{
			max = a[i];
			i++;
		}
		else {
			max = a[j];
			j--;
		}
		if (k % 2 == 0) { playS = playS + max; }
		else { playD = playD + max; }
		k++;
	}
	cout << playS << " " << playD << endl;
}
