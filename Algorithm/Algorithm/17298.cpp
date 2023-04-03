#include<iostream>
#include<string>
#include<stack>
using namespace std;

int seq[1000001];
int output[1000001];

int main()
{
	int tc;

	stack<int> st;

	cin >> tc;

	for (int i = 0; i < tc; i++)
		cin >> seq[i];

	for (int i = tc - 1; i >= 0; i--)
	{
		while (!st.empty() && seq[i] >= st.top())
			st.pop();

		if (st.empty()) output[i] = -1;
		else output[i] = st.top();

		st.push(seq[i]);
	}
	
	for (int i = 0; i < tc; i++)
		cout << output[i] << ' ';

	return 0;
}

