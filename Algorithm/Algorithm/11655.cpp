#include<iostream>
#include<string>
using namespace std;



int main()
{
	string str;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i])) 
		{
			if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
				str[i] += 13;
			else
				str[i] -= 13;
		}
	}
	cout << str<<'\n';


	return 0;
}

