#include <iostream>
#include <vector>
#include <algorithm>

/*

O(n log(n)) solution.
1. find the LCM of all the integers of array A.
2. find the GCD of all the integers of array B.
3. Count the number of multiples of LCM that evenly divides the GCD.

*/
using namespace std;
int getTotalX(vector<int> a, vector<int> b)
{
    vector<int> c;
    double max = *max_element(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j <= max; j++)
        {
            if (find(c.begin(), c.end(), j * a[i]) != c.end())
                continue;
            else
                c.push_back(j * a[i]);
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (c[i] % a[j] != 0)
            {
                c.erase(c.begin() + i);
                i--;
            }
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < c.size(); j++)
        {
            if (b[i] % c[j] != 0)
            {
                c.erase(c.begin() + j);
                j--;
            }
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << endl;
    }

    return c.size();
}
int main()
{
    vector<int> a;
    a.push_back(3);
    a.push_back(4);
    vector<int> b;
    b.push_back(24);
    b.push_back(48);

    cout << getTotalX(a, b);
}