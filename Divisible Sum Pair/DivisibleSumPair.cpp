#include <iostream>
#include <vector>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
            {
                counter++;
            }
        }
    }
    return counter;
}
int main()
{
    vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);
    ar.push_back(3);
    ar.push_back(4);
    ar.push_back(5);
    ar.push_back(6);

    cout << divisibleSumPairs(ar.size(), 5, ar);
}