#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

/*Javascript
var apple_count = apple.filter(value => value + a >= s && value + a <= t).length;
var orange_count = orange.filter(value => value + b >= s && value + b <= t).length;
*/
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int applesCounter = 0;
    int orangesCounter = 0;

    for (int i = 0; i < apples.size(); i++)
    {
        if (apples[i] + a >= s && apples[i] + a <= t)
        {
            applesCounter++;
        }
    }
    for (int i = 0; i < oranges.size(); i++)
    {
        if (oranges[i] + b <= t && oranges[i] + b >= s)
        {
            orangesCounter++;
        }
    }
    cout << applesCounter << "\n"
         << orangesCounter;
}
int main()
{
    vector<int> apples;
    apples.push_back(2);
    apples.push_back(3);
    apples.push_back(-4);
    apples.push_back(3);
    apples.push_back(3);
    apples.push_back(3);

    vector<int> oragnes;
    oragnes.push_back(3);
    oragnes.push_back(-2);
    oragnes.push_back(-4);
    countApplesAndOranges(7, 10, 4, 12, apples, oragnes);
}