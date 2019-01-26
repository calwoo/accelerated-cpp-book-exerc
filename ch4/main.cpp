#include <algorithm>
#include <vector>
#include <iomanip>
#include <iostream>
#include <ios>
#include <stdexcept>
#include <string>
#include "grade.h"
#include "Student_info.h"
using namespace std;

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0; //length of longest name

    // read and store all students data
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    // alphabetize students
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0;
        i != students.size(); i++)
    {
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

        // compute and write grade
        try {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                << setprecision(prec);
        } catch (domain_error e) {
            cout << e.what();
        }

        cout << endl;
    }

    return 0;
}