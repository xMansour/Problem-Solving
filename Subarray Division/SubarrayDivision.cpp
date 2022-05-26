#include <iostream>
#include <vector>

using namespace std;
int birthday(vector<int> s, int d, int m)
{
    int counter = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j < m; j++)
        {
            s[i] += s[i + j];
        }
        if (s[i] == d)
            counter++;
    }

    return counter;
}
int main()
{
    vector<int> scores;
    scores.push_back(2);
    scores.push_back(2);
    scores.push_back(1);
    scores.push_back(3);
    scores.push_back(2);

    birthday(scores, 4, 2);
}