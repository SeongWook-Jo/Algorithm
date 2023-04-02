#include<iostream>
#include<string>
#include<stack>
using namespace std;


int main()
{
	string tc;
	int blockCount = 0;
	int currBlockCount = 0;
	cin >> tc;
	
	for (int i = 0; i < tc.size(); i++)
	{
		if (tc[i] == '(')
		{
			//st.push(tc[i]);
			currBlockCount++;
			blockCount++;
		}
		else
		{
			currBlockCount--;
			if (tc[i - 1] == '(')
			{
				//레이저
				blockCount += currBlockCount;
				blockCount--;
				continue;
			}
		}
	}
	cout << blockCount;

	return 0;
}

