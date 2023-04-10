#include<iostream>
#include<string>
#include<string.h>
using namespace std;



int main()
{
	string str[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}

	cout << stoll(str[0] + str[1]) + stoll(str[2]+str[3]) << '\n';

	return 0;
}

