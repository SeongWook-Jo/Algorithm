#include<iostream>
#include<string.h>
#include<vector>
using namespace std;



int main()
{
	int tc;
	string str;
	cin >> tc;
	cin.ignore();
	for (int i = 0; i < tc; i++)
	{
		cin >> str;
		int vps = 0;
		string answer = "YES";
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '\(')
				vps++;
			else if (vps == 0 && str[j] == '\)')
			{
				answer = "NO";
				break;
			}
			else if (str[j] == '\)')
				vps--;
		}
		if (vps != 0)
			cout << "NO" << endl;
		else
			cout << answer << endl;
	}

	return 0;
}
