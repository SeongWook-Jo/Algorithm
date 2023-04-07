#include<iostream>
#include<string>
using namespace std;



int main()
{
	string str;
	int alpha[26] = {  };

	cin >> str;
	memset(alpha, -1, 4 * 26);
	for (int i = 0; i < str.size(); i++)
	{

		if (alpha[str[i] - 'a'] == -1)
			alpha[str[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';


	return 0;
}

