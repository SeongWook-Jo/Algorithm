#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int cmp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

string input[20000];

int main()
{
	int count;
	
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> input[i];
	}

	sort(input, input + count, cmp);

	for (int i = 0; i < count; i++)
	{
		if (input[i] == input[i + 1])
			continue;

		cout << input[i] << endl;
	}

	return 0;
}

