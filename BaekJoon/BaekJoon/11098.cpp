#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(void)
{
	int testCount;
	int cCount,exMoney;
	int cMoney[100];
	string cName;
	string exName[100];
		
	cin >> testCount;


	for (int j = 0; j < testCount;j++)
	{
		cin >> cCount;
		exMoney = 0;
		for (int i = 0; i < cCount; i++)
		{
			cin >> cMoney[i] >> cName;

			if (exMoney < cMoney[i])
			{
				exMoney = cMoney[i];
				exName[j] = cName;
			}
		}
	}
	for (int i = 0; i < testCount; i++)
	{
		cout << exName[i] << endl;
	}


	return 0;
}
