#include<iostream>
using namespace std;

struct monster
{
	int a, b, flag = 1;
};

int main() {

	int n;
	int A, B, nMonster;
	int a, b;
	cin >> n;
	monster* mArr;
	for (int i = 0; i < n; i++)
	{
		cin >> A >> B >> nMonster;
		mArr = new monster[nMonster];

		for (int j = 0; j < nMonster; j++)
		{
			cin >> a;
			mArr[j].a = a;
		}

		for (int j = 0; j < nMonster; j++)
		{
			cin >> b;
			mArr[j].b = b;
		}


		int heroHealth = B, ct = 0;
		for (int i = 0; i < nMonster; i++)
		{
			//if the i-th monster is alive
			if (mArr[i].flag == 1)
			{
				heroHealth -= mArr[i].a;
				mArr[i].b -= A;
			}

			//if the i-th monster dead
			if (mArr[i].b < 1)
			{
				mArr[i].flag = 0;
				ct++;
			}
			else
			{
				//again
				i--;
			}

			//if hero dead
			if (heroHealth < 1)
			{
				break;
			}

		}

		if (heroHealth > 0 || heroHealth < 1 && ct == nMonster)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
