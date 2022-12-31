#define _CRT_SECURE_NO_WARNINGS
#include<queue>
#include<iostream>

using namespace std;

struct ball {
	int rx;
	int ry;
	int bx;
	int by;
	int count;
};

ball inputBall;

int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };

char board[11][11];

bool visited[11][11][11][11];

void Move(int& x, int& y, int& dst, int& i)
{
	while (board[x + dx[i]][y + dy[i]] != '#' && board[x][y] != 'O')
	{
		x += dx[i];
		y += dy[i];
		++dst;
	}
}

int BFS()
{
	queue<ball> q;
	q.push(inputBall);
	while (!q.empty())
	{
		int rx = q.front().rx;
		int ry = q.front().ry;
		int bx = q.front().bx;
		int by = q.front().by;
		int count = q.front().count;

		q.pop();

		if (count >= 10) return -1;

		for (int i = 0; i < 4; ++i)
		{
			int nrx = rx;
			int nry = ry;
			int nbx = bx;	
			int nby = by;
			int ncount = count;
			int rdst = 0;
			int bdst = 0;

			Move(nrx, nry, rdst, i);
			Move(nbx, nby, bdst, i);

			if (board[nbx][nby] == 'O') continue;
			//if (board[nrx][nry] == 'O' && board[nbx][nby] == 'O') continue;
			if (nrx == nbx && nry == nby)
				(rdst > bdst) ? (nrx = nrx - dx[i], nry = nry - dy[i]) : (nbx = nbx - dx[i], nby = nby - dy[i]);

			
			++ncount;


			if (board[nrx][nry] == 'O')
			{
				return ncount;
			}
			if (!visited[nrx][nry][nbx][nby]) {
				visited[nrx][nry][nbx][nby] = true;
				q.push({ nrx,nry,nbx,nby,ncount });
			}
		}
	}
	return -1;
}


int main(void)
{
	int N, M;
	cin >> N >> M;
	inputBall.count = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{

			cin >> board[i][j];
			if (board[i][j] == 'R')
			{
				inputBall.rx = i;
				inputBall.ry = j;
			}
			if (board[i][j] == 'B')
			{
				inputBall.bx = i;
				inputBall.by = j;
			}
		}
	}

	int result = BFS();

	cout << result;

	return 0;
}