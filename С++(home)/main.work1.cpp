#include <iostream>
 
class CPerson
{
public:
    std::string name;
    std::string surname;
 
    CPerson(std::string surname, std::string name)
    {
        this->surname = surname;
        this->name = name;
    }
 
    void ShowData() const
    {
        std::cout << "Name: " << name << "\tSurname: " << surname << std::endl;
    }
};
 
class CStudent : public CPerson
{
public:
    float score;
 
    CStudent(float score, std::string surname, std::string name) : CPerson(surname, name)
    {
        this->score = score;
    }
 
    void ShowData() const
    {
        std::cout << "Name: " << name << "\tSurname: " << surname << "\t\tScore: " << score << std::endl;
    }
};
 
class CProfessor : public CPerson 
{
    public:
    int number_of_publications;
    std::string post;
    int age;

    CProfessor(int number_of_publications, std::string post, int age, std::string surname, std::string name) : CPerson(surname, name) 
    {
            this->number_of_publications = number_of_publications;
            this->post = post;
            this->age = age;
    }

    void ShowData() const
{
    std::cout << "Name: " << name << "\tSurname: " << surname << "\t\tNumber of publications: " << number_of_publications <<"\tPost: " << post <<"\tAge: " << age << std::endl;
}
};

int main() {
    CStudent student(5.4, "Ivanov", "Max");
    student.ShowData();

    CProfessor professor(18, "Boss", 25, "Ivan", "Ivan");
    professor.ShowData();
 
 
    return 0;
}