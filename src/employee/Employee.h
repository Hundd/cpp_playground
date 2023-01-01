#pragma once
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
    Employee(std::string name, std::string company, int age);
    void IntroduceYourself();
    void setName(string name);
    string getName();
    void setCompany(string company);
    string getCompany();
    void setAge(int age);
    int getAge();
    string getFullName();
    void AskForPromotion();
    virtual void Work();
};

class Developer : public Employee
{
private:
    string FavoriteProgrammingLanguage;

public:
    Developer(string name, string company, int age, string favoriteProgrammingLanguage);
    void FixBug();
    void Work();
};

class Teacher : public Employee
{
private:
    string Subject;

public:
    Teacher(string name, string company, int age, string subject);
    void PrepareLesson();
    void Work();
};