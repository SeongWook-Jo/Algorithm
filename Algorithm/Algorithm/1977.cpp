//#include<iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int M, N;
//	int sum = 0;
//	int minpower = 0;
//	cin >> M;
//	cin >> N;
//	for (int i=1; i <= 100; i++)
//	{
//		if (i * i >= M && i * i <= N)
//		{
//			sum += i * i;
//			if (minpower == 0)
//			{
//				minpower = i * i;
//			}
//		}
//	}
//	if (sum == 0)
//	{
//		cout << "-1" << endl;
//		return 0;
//	}
//
//
//	cout << sum << endl;
//	cout << minpower << endl;
//
//	return 0;
//}