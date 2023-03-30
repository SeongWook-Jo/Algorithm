#include<iostream>
#include<string>
#include<vector>
using namespace std;

int tc;
int input;
int queue[10001];
int idx = 0;
int lowIdx = 0;
string command;

void Push(int x)
{
	queue[idx++] = x;
}
void Pop()
{
	if (idx == lowIdx)
	{
		cout << -1 << '\n';
		return;
	}
	
	cout << queue[lowIdx++]<<'\n';
}

void Size()
{
	cout << idx - lowIdx << '\n';
}
void Empty()
{
	if (idx == lowIdx)
	{
		cout << 1 << '\n';
		return;
	}
	
	cout << 0 << '\n';
}
void Front()
{
	if (idx == lowIdx) {
		cout << -1 << '\n';
		return;
	}
	cout << queue[lowIdx] << '\n';
}
void Back()
{
	if (idx == lowIdx) {
		cout << -1 << '\n';
		return;
	}
	cout << queue[idx-1] << '\n';
}



int main()
{
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		cin >> command;
		if (command == "pop")
		{
			Pop();
		}
		else if (command == "size")
		{
			Size();
		}
		else if (command == "empty")
		{
			Empty();
		}
		else if (command == "front")
		{
			Front();
		}
		else if (command == "back")
		{
			Back();
		}
		else if (command == "push")
		{
			int x;
			cin >> x;
			Push(x);
		}
	}


	return 0;
}

