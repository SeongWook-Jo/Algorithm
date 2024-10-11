#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<pair<int, int>> f(41);

    f[0] = { 1, 0 };
    f[1] = { 0,1 };

    for (int i = 2; i < 41; i++)
    {
        f[i].first = f[i - 1].first + f[i - 2].first;
        f[i].second = f[i - 1].second + f[i - 2].second;
    }

    while (N--)
    {
        int v;

        cin >> v;

        cout << f[v].first << " " << f[v].second << endl;
    }
}

