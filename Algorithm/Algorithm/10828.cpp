#include <iostream>
#include<string.h>
using namespace std;

int numArr[10001];
int idx;
int Pop()
{
	if (idx == 0)
	{
		return -1;
	}
	int temp = numArr[idx-1];
	numArr[idx-1] = 0;
	idx--;
	return temp;
}
int Size()
{
	return idx;
}

int Empty()
{
	for (int i = 0; i < idx; i++)
	{
		if (numArr[i] != 0)
		{
			return 0;
		}
	}
	return 1;
}

int Top()
{
	if (idx== 0) return -1;
	return numArr[idx-1];
}

void Push(int inputNum)
{
	numArr[idx] = inputNum;
	idx++;
}

int main()
{
	int commandNum = 0;
	char* input = new char[100];
	int inputNum;

	cin >> commandNum;

	for (int i = 0; i < commandNum; i++)
	{
		cin >> input;
		if (strcmp(input, "pop") == 0)
		{
			printf("%d\n", Pop());
		}
		else if (strcmp(input, "size") == 0)
		{
			printf("%d\n", Size());
		}
		else if (strcmp(input, "empty") == 0)
		{
			printf("%d\n", Empty());
		}
		else if (strcmp(input, "top") == 0)
		{
			printf("%d\n", Top());
		}
		else if (strcmp(input, "push") == 0)
		{
			cin >> inputNum;
			Push(inputNum);
		}
	}
	return 0;
}

