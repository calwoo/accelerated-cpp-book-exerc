#include <vector>
#include "Student_info.h"
#include "grade.h"

vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> pass, fail;

    for (vector<Student_info>::size_type i = 0;
        i != students.size(); i++)
    {
        if (fgrade(students[i]))
            fail.push_back(students[i]);
        else
        {
            pass.push_back(students[i]);
        }
        
    }

    students = pass;
    return fail;
}

// another version, using iterators
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vectur<Student_info>::iterator iter = students.begin()

    while (iter != students.end()) {
        if (fgrade(*iter)) {
            fail.push_back(*iter);
            iter = students.erase(iter);
        } else {
            iter++;
        }
        
    }
    return fail;
}