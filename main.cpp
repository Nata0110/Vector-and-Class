#include <iostream>
#include <vector>
#include <human.h>

   class Human
    {
        int age;
        std::string name;

    public:
        Human (int v, std::string n)
        {
           age = v;
           name = n;
         }
        std::string setName();
        int setAge ();
        std::string getName()
            {
                return name;
            }
            int getAge()
            {
                return age;
            }
    };
//        void setHuman(int age_p, std::string name_p)
//        {
//           age = age_p;
//           std::string name = name_p;
//        }
//       void setAge(int newAge);
//       void setName(const std::string &newName);

//        int getAge() const;
//        const std::string &getName() const;
//    };

//    class Teacher : public Human
//    {
//    private:
//        int zp;
//        std::string subject;

//    public:
//        void setTeacher(int zp_p, std::string subject_p)
//        {
//           zp = zp_p;
//           std::string name = subject_p;
//        }
//    };



int main()
{
    Human orest(88, "Orest");
        std::cout << orest.getName() << orest.getAge() << std::endl;
}

//    Teacher taras;
//    Teacher natalia;
//    Teacher orest;
//    std::vector <Teacher> students;
//    students.push_back(taras);
//     students.push_back(natalia);
//      students.push_back(orest);

//    Teacher taras;
//    taras.age = 32;
//    taras.name = "Taras";
//    taras.surname = "Lepa";
//    taras.zp = 565463;

//    Teacher orest;
//    orest.age = 39;
//    orest.name = "Orest";
//    orest.surname = "Guy";
//    orest.zp = 465463;

//    Teacher natalia;
//    natalia.age = 20;
//    natalia.name = "Nataliia";
//    natalia.surname = "Martynovych";
//    natalia.zp = 8795463;



//for (auto const &element: students)
//   {
//     std::cout <<  element.name << std::endl;
//     std::cout <<  element.surname << std::endl;
//     std::cout <<  element.age << std::endl;
//     std::cout <<  element.zp << "\n" << std::endl;
//    }
//    //print all data from teachers

