#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int GetChangeCount(vector<vector<int>> input, int rawPos, int colPos, bool isWhite)
{
	int changeCount = 0;

	for (int i = rawPos; i < rawPos + 8; i++)
	{
		for (int j = colPos; j < colPos + 8; j++)
		{
			if (isWhite && input[i][j] == 1)
				changeCount++;

			if (isWhite == false && input[i][j] == 0)
				changeCount++;

			isWhite = !isWhite;
		}
		isWhite = !isWhite;
	}

	return changeCount;
}

int row, col;

int minCount;

int main()
{
	minCount = 100000;

	cin >> row >> col;

	vector<vector<int>> input;

	// 0 = w, 1 = b

	for (int i = 0; i < row; i++)
	{
		vector<int> inputLine;

		string board;

		cin >> board;

		for (int j = 0; j < col; j++)
		{
			if (board[j] == 'W')
				inputLine.push_back(0);
			else
				inputLine.push_back(1);
		}

		input.push_back(inputLine);
	}

	int rawPos = 0;
	int colPos = 0;

	while (true)
	{
		int rowCount = min(GetChangeCount(input, rawPos, colPos, true), GetChangeCount(input, rawPos, colPos, false));

		if (rowCount < minCount)
			minCount = rowCount;

		if (colPos + 8 < col)
		{
			colPos++;
			continue;
		}

		if (rawPos + 8 < row)
		{
			rawPos++;
			colPos = 0;
			continue;
		}

		break;
	}

	cout << minCount << endl;

	return 0;
}