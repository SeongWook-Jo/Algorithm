#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;



int main()
{
	queue<int> qu;
	int tc,term,tmp;
	
	cin >> tc >> term;

	for (int i = 1; i <= tc; i++)
	{
		qu.push(i);
	}

	cout << '<';

	while (qu.size() > 1)
	{
		for (int i = 0; i < term-1; i++)
		{
			tmp = qu.front();
			qu.pop();
			qu.push(tmp);
		}
		tmp = qu.front();
		qu.pop();
		cout << tmp << ", ";
	}
	cout << qu.front() << ">\n";


	return 0;
}

