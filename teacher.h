#ifndef TEACHER_H
#define TEACHER_H

#include "human.h"

class Teacher : public Human  // успадкування
{
public:
    Teacher(); // конструктор запускається при створюванні обєкта

    int getZp() const;
    void setZp(int newZp);

    const std::string &getSubject() const;
    void setSubject(const std::string &newSubject);

private:
    int zp;
    std::string subject;
};

#endif // TEACHER_H //директива препроцесора -
