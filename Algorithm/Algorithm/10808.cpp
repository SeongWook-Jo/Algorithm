#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;



int main()
{
	string str;
	int alpha[26] = { 0 };

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		alpha[str[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';


	return 0;
}

