#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2)
{
    // x1+y*v1 = x2+y*v2
    // so y = (x1-x2)/(v2-v1)

    /*if ((x1 - x2) % (v2 - v1) == 0)
        return "YES";
    else
        return "NO";*/

    if (v1 >= 1 && v1 <= 10000 && v2 >= 1 && v2 <= 10000 && x1 >= 0 && x1 < x2 && x2 <= 10000)
    {
        int distance1 = x1;
        int distance2 = x2;
        while (distance2 <= 100000000)
        {
            // cout << distance2 << endl;
            {
                if (distance1 == distance2)
                {
                    return "YES";
                }
                distance1 += v1;
                distance2 += v2;
            }
        }
    }
    else if (v2 > v1 && x2 > x1)
    {
        return "NO";
    }

    return "NO";
}
int main()
{
    vector<int> apples;

    cout << kangaroo(0, 2, 5, 3) << endl;
    cout << kangaroo(0, 3, 4, 2) << endl;
    cout << kangaroo(7271, 2211, 7915, 2050) << endl;
    cout << kangaroo(4523, 8092, 9419, 8076) << endl;
}