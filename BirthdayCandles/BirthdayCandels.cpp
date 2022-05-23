#include <iostream>// std::cout
#include <vector>
#include <algorithm> // std::min_element, std::max_element

using namespace std;
/*
void birthdayCakeCandles(vector<int> candles)
{
    int max = candles[0];
    int occurance = 1;
    for (int i = 1; i < candles.size(); i++)
    {
        if (max < candles[i])
        {
            max = candles[i];
            occurance = 1;
        }
        else if (max == candles[i])
            occurance++;
    }

    cout << occurance;
}
*/
int birthdayCakeCandles(vector<int> candles)
{
    return count(candles.begin(), candles.end(), *max_element(candles.begin(), candles.end()));
}
int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(3);
    cout << birthdayCakeCandles(arr);
}