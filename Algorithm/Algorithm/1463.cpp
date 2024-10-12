#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

int result = 100000;

void dfs(int v, int cnt)
{
	if (v == 1)
	{
		if (result > cnt)
			result = cnt;

		return;
	}

	cnt++;

	if (v % 3 == 0)
		dfs(v/3, cnt);

	if (v % 2 == 0)
		dfs(v/2, cnt);

	dfs(v - 1, cnt);
}

int main()
{
	int n;

	cin >> n;

	dfs(n, 0);

	cout << result;

	return 0;
}

