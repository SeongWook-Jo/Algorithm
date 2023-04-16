#include<iostream>

using namespace std;



int main()
{
	int input[3];

	for (int i = 0; i < 3; i++)
		cin >> input[i];
	cout << (input[0] + input[1]) % input[2] << '\n';
	cout << ((input[0] % input[2]) + (input[1] % input[2])) % input[2] << '\n';
	cout << (input[0] * input[1]) % input[2] << '\n';
	cout << ((input[0] % input[2]) * (input[1] % input[2])) % input[2] << '\n';

	return 0;
}

