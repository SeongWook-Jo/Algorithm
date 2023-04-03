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

	st.push(-1);
	for (int j = tc - 2; j >= 0; j--)
	{
		st.push(-1);
		for (int k = j + 1; k < tc; k++)
		{
			if (seq[j] < seq[k]) {
				st.pop();
				st.push(seq[k]);
				break;
			}
		}
	}
	while (!st.empty())
	{
		int num = st.top();
		st.pop();
		cout << num << ' ';
	}
	return 0;
}

