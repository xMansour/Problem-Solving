#include <iostream>
#include "vector"
#include <iomanip>
using namespace std;
void plusMinus(vector<int> arr);

int main()
{
    vector<int> arr;
    arr.push_back(-4);
    arr.push_back(3);
    arr.push_back(-9);
    arr.push_back(0);
    arr.push_back(4);
    arr.push_back(1);
    plusMinus(arr);
}

void plusMinus(vector<int> arr)
{
    float postives = 0;
    float negatives = 0;
    float zeros = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            postives++;
        else if (arr[i] < 0)
            negatives++;
        else
            zeros++;
    }
    cout << setprecision(6) << postives / arr.size() << "\n";
    cout << setprecision(6) << negatives / arr.size() << "\n";
    cout << setprecision(6) << zeros / arr.size() << "\n";
}