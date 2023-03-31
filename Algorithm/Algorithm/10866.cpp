#include<iostream>
#include<string>
using namespace std;

class Node {
public:
	Node* prev;
	Node* next;
	int data;
public:
	Node(int x)
	{
		data = x;
	}
};
class Dequeue {
	
private:
	Node* front;
	Node* back;
	int size;
public:
	Dequeue()
	{
		size = 0;
		front = nullptr;
		back = nullptr;
	}
	void push_front(int x)
	{
		Node* node = new Node(x);
		if (size == 0)
		{
			front = back = node;
			size++;
			return;
		}
		front->prev = node;
		node->next = front;
		front = node;
		size++;
	}
	void push_back(int x)
	{
		Node* node = new Node(x);
		if (size == 0)
		{
			front = back = node;
			size++;
			return;
		}
		back->next = node;
		node->prev = back;
		back = node;
		size++;
	}
	int pop_front()
	{
		if (size == 0) return -1;
		int temp = front->data;
		front = front->next;
		size--;
		return temp;
	}
	int pop_back()
	{
		if (size == 0) return -1;
		int temp = back->data;
		back = back->prev;
		size--;
		return temp;
	}
	int GetSize()
	{
		return size;
	}
	int empty()
	{
		if (size == 0) return 1;
		return 0;
	}
	int GetFront()
	{
		if (size == 0) return -1;
		return front->data;
	}
	int GetBack()
	{
		if (size == 0) return -1;
		return back->data;
	}
};

int main()
{
	Dequeue dq;
	string command;
	int tc;
	int inputNum;

	cin >> tc;
	while (tc--)
	{
		cin >> command;
		if (command == "push_front")
		{
			cin >> inputNum;
			dq.push_front(inputNum);
		}
		else if (command == "push_back")
		{
			cin >> inputNum;
			dq.push_back(inputNum);
		}
		else if (command == "pop_front")
		{
			cout << dq.pop_front() << '\n';
		}
		else if (command == "pop_back")
		{
			cout << dq.pop_back() << '\n';
		}
		else if (command == "size")
		{
			cout << dq.GetSize() << '\n';
		}
		else if (command == "empty")
		{
			cout << dq.empty() << '\n';
		}
		else if (command == "front")
		{
			cout << dq.GetFront() << '\n';
		}
		else if (command == "back")
		{
			cout << dq.GetBack() << '\n';
		}
	}


	return 0;
}

/*
//배열을 이용한 Dequeue 구현 불가

class Dequeue {
private:
	int* deqArr;
	int size;
	int frontIdx;
	int backIdx;
	int lastIdx;

public:
	Dequeue()
	{
		deqArr = new int[10001];
		frontIdx = 0;
		backIdx = 10000;
		lastIdx = 10000;
		size = 0;
	}
	Dequeue(int x)
	{
		deqArr = new int[x];
		frontIdx = 0;
		backIdx = x-1;
		lastIdx = x - 1;
		size = 0;
	}
	void push_front(int value)
	{
		deqArr[frontIdx++] = value;
		size++;
	}
	void push_back(int value)
	{
		deqArr[backIdx--] = value;
		size++;
	}
	int pop_front()
	{
		if (size == 0)
		{
			return -1;
		}
		size--;
		return	deqArr[--frontIdx];
	}
	int pop_back()
	{
		if (size == 0)
		{
			return -1;
		}
		size--;
		return	deqArr[++backIdx];
	}
	int sizeChk()
	{
		return size;
	}
	int empty()
	{
		if (size == 0) return 1;
		return 0;
	}
	int front()
	{
		if (size == 0) return -1;
		return deqArr[frontIdx-1];
	}
	int back()
	{
		if (size == 0) return -1;
		return deqArr[backIdx+1];
	}
	~Dequeue()
	{
		delete[] deqArr;
	}
};


int main()
{
	Dequeue dq;
	string command;
	int tc;
	int inputNum;

	cin >> tc;
	while (tc--)
	{
		cin >> command;
		if (command == "push_front")
		{
			cin >> inputNum;
			dq.push_front(inputNum);
		}
		else if (command == "push_back")
		{
			cin >> inputNum;
			dq.push_back(inputNum);
		}
		else if (command == "pop_front")
		{
			cout << dq.pop_front() << '\n';
		}
		else if (command == "pop_back")
		{
			cout << dq.pop_back() << '\n';
		}
		else if (command == "size")
		{
			cout << dq.sizeChk() << '\n';
		}
		else if (command == "empty")
		{
			cout << dq.empty() << '\n';
		}
		else if (command == "front")
		{
			cout << dq.front() << '\n';
		}
		else if (command == "back")
		{
			cout << dq.back() << '\n';
		}
	}


	return 0;
}

*/