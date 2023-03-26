#include<iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct Time {
	int hour;
	int minute;
	int second;
};

string ExtraTime(string curTime, string startTime)
{
	string timeStr;
	Time time;


	time.hour = stoi(startTime.substr(0, 2)) - stoi(curTime.substr(0, 2));
	time.minute = stoi(startTime.substr(3, 2)) - stoi(curTime.substr(3, 2));
	time.second = stoi(startTime.substr(6, 2)) - stoi(curTime.substr(6, 2));

	if (time.second < 0)
	{
		time.minute -= 1;
		time.second = 60 + time.second;
	}
	if (time.minute < 0)
	{
		time.hour -= 1;
		time.minute = 60 + time.minute;
	}
	if (time.hour < 0)
	{
		time.hour = 24 + time.hour;
	}


	if (time.hour > 9) {
		timeStr = to_string(time.hour);
	}
	else
	{
		timeStr = "0" + to_string(time.hour);
	}

	timeStr += ":";

	if (time.minute > 9) {
		timeStr += to_string(time.minute);
	}
	else
	{
		timeStr += "0" + to_string(time.minute);
	}

	timeStr += ":";

	if (time.second > 9) {
		timeStr += to_string(time.second);
	}
	else
	{
		timeStr += "0" + to_string(time.second);
	}


	return timeStr;
}

int main(void)
{
	string startTime, curTime;
	string timeStr;

	//cout << "시간을 입력해 주세요 xx:xx:xx" << endl;
	cin >> curTime;
	cin >> startTime;

	timeStr = ExtraTime(curTime, startTime);

	cout << timeStr;

	return 0;

}