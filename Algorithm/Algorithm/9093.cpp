#include<iostream>
#include<vector>
#include<stack>
#include <string>
using namespace std;


int main()
{
	int tc;
	stack<char> st;
	string input;

	cin >> tc;
	cin.ignore();

	for (int i = 0; i < tc; i++)
	{
		getline(cin, input);
		input += ' ';
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == ' ')
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else
				st.push(input[j]);
		}
		cout << '\n';
	}
	return 0;
}

