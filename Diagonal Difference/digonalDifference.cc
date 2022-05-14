#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(int arr[3][3], int length)
{
    int firstDagSum = 0;
    int secondDagSum = 0;
    // int length = arr.size();
    cout << length << endl
         << endl;
    for (int i = 0; i < length; i++)
    {
        firstDagSum += arr[i][i];
        secondDagSum += arr[i][length - 1 - i];
    }

    cout << "firstDagSum: " << firstDagSum << endl
         << endl;
    cout << "secondDagSum: " << secondDagSum << endl
         << endl;
    return abs(firstDagSum - secondDagSum);
}

int main()
{

    int arr[3][3] = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};

    int arrLength = sizeof(arr[0]) / sizeof(int);
    int result = diagonalDifference(arr, arrLength);
    cout << result;

    return 0;
}
