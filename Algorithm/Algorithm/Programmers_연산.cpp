#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {

    int answer = 0;
    for (int i = 0; absolutes.size(); i++)
    {
        if (signs.back())
        {
            answer += absolutes.back();
        }
        else
        {
            answer -= absolutes.back();
        }
        absolutes.pop_back();
        signs.pop_back();
    }
    

    
    return answer;
}