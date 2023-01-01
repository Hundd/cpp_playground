#include <iostream>
#include <string>
#include "Employee.h"
using std::string;

int main()
{
    const char *a = "Hi I am a letter \"A\"";
    std::cout << a << std::endl;
    Employee ivan = Employee("Ivan", "Telnet", 13);

    Employee *martha = new Employee("Martha", "Google", 26);

    std::cout << ivan.getName() + "" << std::endl;
    std::cout << martha->getName() << std::endl;

    ivan.IntroduceYourself();
    std::cout << std::endl;

    martha->setAge(99);
    martha->IntroduceYourself();
    std::cout << martha->getFullName() << std::endl;

    ivan.AskForPromotion();
    martha->AskForPromotion();

    Developer *maxim = new Developer("Maxim", "Google", 26, "C++");
    maxim->FixBug();
    maxim->AskForPromotion();

    Teacher *jack = new Teacher("Jack", "School", 50, "History");
    jack->PrepareLesson();
    jack->AskForPromotion();

    std::cout << std::endl;
    jack->Work();
    maxim->Work();

    std::cout << std::endl;

    Employee *e1 = maxim;
    Employee *e2 = jack;
    Employee *e3 = &ivan;

    e1->Work();
    e2->Work();
    e3->Work();
}
