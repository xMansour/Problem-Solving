#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string timeConversion(string s)
{
    int pmIndex = -1;
    int amIndex = -1;
    pmIndex = s.find("PM");
    amIndex = s.find("AM");
    if (pmIndex != -1)
    {

        return s.substr(0, pmIndex).replace(0, 2, to_string((stoi(s.substr(0, 2)) % 12) + 12));
    }
    else if (amIndex != -1)
    {
        return s.substr(0, amIndex).replace(0, 2, "0" + to_string(stoi(s.substr(0, 2)) % 12));
    }

    return "";
}
int main()
{
    cout << timeConversion("12:01:00PM");
}