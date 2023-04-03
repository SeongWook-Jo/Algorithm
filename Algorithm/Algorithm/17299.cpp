#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

int seq[1000001];
int totalCount[1000001];
int output[1000001];


int main()
{
	int tc;
	int inputNum;
	stack<int> st;
	stack<int> stData;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		cin >> inputNum;
		seq[i] = inputNum;
		totalCount[inputNum] += 1;
	}

	for (int i = tc - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() <= totalCount[seq[i]])
		{
			st.pop();
			stData.pop();
		}
			

		if (st.empty()) output[i] = -1;
		else output[i] = stData.top();
		//top의 seq값

		st.push(totalCount[seq[i]]);
		stData.push(seq[i]);
	}

	for (int i = 0; i < tc; i++)
		cout << output[i] << ' ';


	return 0;
}

