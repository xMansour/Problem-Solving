#include <iostream>
#include <vector>

using namespace std;
vector<int> breakingRecords(vector<int> scores)
{
    vector<int> breakTimes;
    int max = scores[0];
    int min = scores[0];
    int maxChanges = 0;
    int minChanges = 0;
    for (int i = 1; i < scores.size(); i++)
    {
        if (max < scores[i])
        {
            max = scores[i];
            maxChanges++;
        }
        else if (min > scores[i])
        {
            min = scores[i];
            minChanges++;
        }
    }
    breakTimes.push_back(maxChanges);
    breakTimes.push_back(minChanges);
    return breakTimes;
}
int main()
{
    vector<int> scores;
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(21);
    scores.push_back(36);
    scores.push_back(10);
    scores.push_back(28);
    scores.push_back(35);
    scores.push_back(5);
    scores.push_back(24);
    scores.push_back(42);
    breakingRecords(scores);
}