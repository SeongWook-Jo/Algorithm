#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
using namespace std;



int main()
{
	string input;
	stack<char> st;
	bool bo = false;

	getline(cin, input);
	input += ' ';
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '<')
		{
			while (!st.empty())
			{
				char temp = st.top();
				st.pop();
				cout << temp;
			}
			bo = true;
			cout << input[i];
		}
		else if (bo)
		{
			cout << input[i];
			if (input[i] == '>')
				bo = false;
		}
		else if (input[i] == ' ')
		{
			while(!st.empty())
			{
				char temp = st.top();
				st.pop();
				cout << temp;
			}
			cout << ' ';
		}
		else
		{
			st.push(input[i]);
		}
	}

	return 0;
}

