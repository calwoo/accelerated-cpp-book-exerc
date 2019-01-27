#include <iostream>

Student_info::Student_info(): midterm(0), final(0) {}
Student_info::Student_info(istream& is) { read(is); }

istream& Student_info::read(istream& in)
{
    in >> name >> midterm >> final;
    read_hw(in, homework);
    return in;
}

double Student_info::grade() const
{
    return ::grade(midterm, final, homework);
}

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name() < y.name();
}