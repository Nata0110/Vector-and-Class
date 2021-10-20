#include <iostream>
#include "human.h"

human::human()
{
    class Human
    {
        int age;
        std::string name;

    public:
        void setHuman(int age_p, std::string name_p)
        {
           age = age_p;
           std::string name = name_p;
        }
        void setAge(int newAge);
        void setName(const std::string &newName);

        int getAge() const;
        const std::string &getName() const;
    };

    class Teacher : public Human
    {
    private:
        int zp;
        std::string subject;

    public:
        void setTeacher(int zp_p, std::string subject_p)
        {
           zp = zp_p;
           std::string name = subject_p;
        }
    };

}

//void human::Human::setAge(int newAge)
//{
//    age = newAge;
//}

//void human::Human::setName(const std::string &newName)
//{
//    name = newName;
//}

//int human::Human::getAge() const
//{
//    return age;
//}

//const std::string &human::Human::getName() const
//{
//    return name;
//}
