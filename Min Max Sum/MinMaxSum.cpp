#include <iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr);

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(9);
    miniMaxSum(arr);
}

void miniMaxSum(vector<int> arr)
{
    long int min = arr[0];
    long int max = arr[0];
    long int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
        sum += arr[i];
    }

    long int minSum = sum - max;
    long int maxSum = sum - min;
    cout << minSum << " " << maxSum;
}