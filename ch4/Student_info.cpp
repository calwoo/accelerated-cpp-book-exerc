#include "Student_info.h"
using namespace std;

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

istream& read(istream& in, Student_info& s)
{
    // read and store student data
    in >> s.name >> s.midterm >> s.final;

    read_hw(in, s.homework);
    return in;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if (in) {
        // clear hw vector
        hw.clear();

        double x;
        while (in >> x)
            hw.push_back(x);
        // clear stream so input will work for next student
        in.clear();
    }
    return in;
}