#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
#include <iterator>
#include <list>
using namespace std;

int main(void)
{
	int tc;
	string str;
	char input;
	list<char> lt;

	cin >> str;
	for (char c : str)
	{
		lt.push_back(c);
	}
	auto it = lt.end();

	cin >> tc;
	while (tc--)
	{
		cin >> input;
		if (input == 'L')
		{
			//왼쪽한칸
			if (it != lt.begin())
			{
				it--;
			}
		}
		else if (input == 'D')
		{
			//오른쪽한칸
			if (it != lt.end())it++;

		}
		else if (input == 'B')
		{
			//커서 왼쪽 삭제
			if (it != lt.begin())
				it = lt.erase(--it);
		}
		else if (input == 'P')
		{
			cin >> input;
			//푸시
			lt.insert(it, input);
		}
	}
	it = lt.begin();
	for (int i = 0; i < lt.size(); i++)
		cout << *it++;
	return 0;
}


/*
int main()
{
	//벡터로 진행시 시간 초과 list로 풀이
	vector<char> vc;
	string str;
	int cursor = -1;
	int tc;
	char command;
	cin >> str;
	for (char c : str)
	{
		vc.push_back(c);
		cursor++;
	}
	cin >> tc;
	while (tc--)
	{
		cin >> command;
		if (command == 'L')
		{
			if (cursor == -1) continue;
			cursor--;
		}
		else if (command == 'P')
		{
			cin >> command;
			if (cursor == vc.size() - 1) {
				vc.push_back(command);
				cursor++;
				continue;
			}
			vc.insert(vc.begin() + (cursor + 1), command);
			cursor++;
		}
		else if (command == 'B')
		{
			if (cursor == -1) continue;
			vc.erase(vc.begin() + cursor);
			cursor--;
		}
		else if (command == 'D')
		{
			if (cursor == vc.size() - 1) continue;
			cursor++;
		}
	}
	for (int i = 0; i < vc.size(); i++)
		cout << vc[i];


	return 0;
}
*/
