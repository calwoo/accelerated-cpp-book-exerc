#ifndef GUARD_student_info_h
#define GUARD_student_info_h


#include <string>
#include <vector>


class Student_info {
private:
    std::string name;
    double midterm, final;
    std::vector<double> homework;

public:
    // constructors
    Student_info();
    Student_info(std::istream&);

    std::istream& read(std::istream&);
    std::string name() const { return name; }
    double grade() const;
    bool valid() const { return !homework.empty(); }
};

bool compare(const Student_info&, const Student_info&);

#endif