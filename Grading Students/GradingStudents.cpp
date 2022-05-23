#include <iostream>
#include "vector"
#include <string>

using namespace std;

// cout << grade < 38 || grade % 5 < 3 ? grade : grade + (5 - (grade % 5));
vector<int> gradingStudents(vector<int> grades)
{
    for (int grade : grades)
        for (int i = 0; i < grades.size(); i++)
            if (grades[i] >= 38)
                for (int j = 1; j < 3; j++)
                    if ((grades[i] + j) % 5 == 0)
                        grades[i] += j;

    return grades;
}
int main()
{
    vector<int> grades;
    grades.push_back(73);
    grades.push_back(67);
    grades.push_back(38);
    grades.push_back(33);

    string s;
    for (int grade : gradingStudents(grades))
    {
        s.append(to_string(grade) + " ");
    }
    cout << s;
}