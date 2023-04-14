#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main()
{
	string input;
	string temp[1000];
	int length;
	cin >> input;
	
	length = input.length();

	for (int i = 0; i < length; i++)
	{
		temp[i] = input.substr(i);
	}
	sort(temp, temp + length);

	for (int i = 0; i < length; i++)
		cout << temp[i] << '\n';

	return 0;
}

