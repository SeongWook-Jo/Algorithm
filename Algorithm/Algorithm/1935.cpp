#include<iostream>
#include<string>
#include<stack>
using namespace std;



int main()
{
	int tc;
	int operand[26];
	int input;
	string str;
	stack<double> st;


	cin >> tc;
	cin >> str;

	for (int i = 0; i < tc; i++)
	{
		cin >> input;
		operand[i] = input;
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			st.push(operand[str[i] - 'A']);
			continue;
		}
		double tempFlt = st.top();
		st.pop();
		switch (str[i])
		{
			case '*':
				tempFlt = st.top() * tempFlt;
				break;
			case '/':
				tempFlt = st.top() / tempFlt;
				break;
			case '+':
				tempFlt = st.top() + tempFlt;
				break;
			case '-':
				tempFlt = st.top() - tempFlt;
				break;
			default:
				break;
		}
		st.pop();
		st.push(tempFlt);
	}

	cout << fixed;
	cout.precision(2);
	cout << st.top() << '\n';

	return 0;
}

