#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int bat[50][50];
bool visited[50][50];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int width, height, bCount;

void dfs(int x, int y)
{
	visited[x][y] = true;
	
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (0 <= nx && nx < width && 0 <= ny && ny < height)
		{
			if (bat[nx][ny] && visited[nx][ny] == false)
				dfs(nx, ny);
		}
	}
}


int main()
{
	int N;

	cin >> N;

	while (N--)
	{
		memset(bat, 0, sizeof(bat));
		memset(visited, 0, sizeof(visited));

		cin >> width >> height >> bCount;

		while (bCount--)
		{
			int inputX, inputY;

			cin >> inputX >> inputY;

			bat[inputX][inputY] = 1;
		}

		int worms = 0;

		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (bat[i][j] && visited[i][j] == false)
				{
					dfs(i, j);
					worms++;
				}
			}
		}

		cout << worms << endl;
	}

	return 0;
}

