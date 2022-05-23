#include <iostream>
using namespace std;

void drawStairCase(int n);
int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    drawStairCase(n);
}

void drawStairCase(int n)
{
    // JS Sweetness
    /*
    for (let i = 1; i <= n; i++) {
    console.log("#".repeat(i).padStart(n));
    }
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }
}