#include <iostream>
#include "Employee.h"
using std::string;

Employee::Employee(string name, string company, int age)
{
    Name = name;
    Company = company;
    Age = age;
}

void Employee::IntroduceYourself()
{
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Company: " << Company << std::endl;
    std::cout << "Age: " << Age << std::endl;
}

void Employee::setName(string name)
{
    Name = name;
}

string Employee::getName()
{
    return Name;
}

void Employee::setCompany(string company)
{
    Company = company;
}

string Employee::getCompany()
{
    return Company;
}

void Employee::setAge(int age)
{
    if (age >= 18)
        Age = age;
}

int Employee::getAge()
{
    return Age;
}

string Employee::getFullName()
{
    return Name + " " + std::to_string(Age);
}

void Employee::Work()
{
    std::cout << Name << " is checking emails, task backlog, performing tasks..." << std::endl;
}

void Employee::AskForPromotion()
{
    if (Age > 30)
        std::cout << Name << " got promoted!" << std::endl;
    else
        std::cout << Name << ", sorry, NO promotion for you!" << std::endl;
}

Developer::Developer(string name, string company, int age, string favoriteProgrammingLanguage) : Employee(name, company, age)
{
    FavoriteProgrammingLanguage = favoriteProgrammingLanguage;
}

void Developer::FixBug()
{
    std::cout << getName() << " is fixing bug." << std::endl;
}

void Developer::Work()
{
    std::cout << Name << "is writing " << FavoriteProgrammingLanguage << " code." << std::endl;
}

Teacher::Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
{
    Subject = subject;
}

void Teacher::PrepareLesson()
{
    std::cout << Name << " is preparing " << Subject << " lesson!" << std::endl;
}

void Teacher::Work()
{
    std::cout << Name << " is teaching " << Subject << "." << std::endl;
}