#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;



int main()
{
	int target;
	int currNum = 1;
	vector<char> stChar;
	int tc;
	stack<int> st;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		cin >> target;
		while (currNum <= target)
		{
			st.push(currNum++);
			stChar.push_back('+');
		}
		if (st.top() == target)
		{
			st.pop();
			stChar.push_back('-');
		}
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	for (int i = 0; i < stChar.size(); i++) cout << stChar[i] << '\n';
	return 0;
}
