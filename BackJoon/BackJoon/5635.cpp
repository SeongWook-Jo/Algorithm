#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int count;
	string name[100];
	int day[100], month[100], year[100];
	int lastBirth=0, slowBirth = 0, slowBirthidx = 0, fastBirth = 99999999, fastBirthidx = 0;


	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> name[i] >> day[i] >> month[i] >> year[i];

		lastBirth = (year[i] * 10000) + (month[i] * 100) + (day[i]);
		if (lastBirth < fastBirth)
		{
			fastBirth = lastBirth;
			fastBirthidx = i;
		}
		if (lastBirth > slowBirth)
		{
			slowBirth = lastBirth;
			slowBirthidx = i;
		}

	}
	cout << name[slowBirthidx] << endl;
	cout << name[fastBirthidx] << endl;


	return 0;


}
