#include <iostream>
#include <string>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void IntroduceYourself()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }

    void setName(string name)
    {
        Name = name;
    }

    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }

    int getAge()
    {
        return Age;
    }

    string getFullName()
    {
        return Name + " " + std::to_string(Age);
    }

    void AskForPromotion()
    {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry, NO promotion for you!" << std::endl;
    }

    virtual void Work()
    {
        std::cout << Name << " is checking emails, task backlog, performing tasks..." << std::endl;
    }
};

class Developer : public Employee
{
public:
    string FavoriteProgrammingLanguage;

    Developer(string name, string company, int age, string favoriteProgrammingLanguage) : Employee(name, company, age)
    {
        FavoriteProgrammingLanguage = favoriteProgrammingLanguage;
    }

    void FixBug()
    {
        std::cout << getName() << " is fixing bug." << std::endl;
    }

    void Work()
    {
        std::cout << Name << "is writing " << FavoriteProgrammingLanguage << " code." << std::endl;
    }
};

class Teacher : public Employee
{
    string Subject;

public:
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }

    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }

    void Work()
    {
        std::cout << Name << " is teaching " << Subject << "." << std::endl;
    }
};