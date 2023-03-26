#include<iostream>
#include <string>
using namespace std;


int main(void)
{
	int num;
	
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int k = num; k > i+1; k--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}