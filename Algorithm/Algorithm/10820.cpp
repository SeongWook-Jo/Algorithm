#include<iostream>
#include<string>
using namespace std;



int main()
{
	string str;


	while (true)
	{
		getline(cin, str, '\n');
		if (str.size() == 0) return 0;
		str += '\n';

		int chkStr[4] = { 0 };
		
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z') chkStr[0]++;
			else if (str[i] >= 'A' && str[i] <= 'Z') chkStr[1]++;
			else if (str[i] >= '0' && str[i] <= '9') chkStr[2]++;
			else if (str[i] == ' ') chkStr[3]++;
		}
		cout << chkStr[0] << ' ';
		cout << chkStr[1] << ' ';
		cout << chkStr[2] << ' ';
		cout << chkStr[3] << ' ';
		cout << '\n';
	}

	


	return 0;
}

