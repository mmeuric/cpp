#pragma once

#include "AForm.hpp"

class Intern
{
    private:
        static AForm* makeShrubbery(const std::string &target);
        static AForm* makeRobotomy(const std::string &target);
        static AForm* makePresidential(const std::string &target);
    public:
        Intern();
        ~Intern();
        Intern(Intern const &copy);
        Intern &operator=(Intern const &other);

        AForm *makeForm(std::string const &formName, std::string const &target);
};

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &copy)
{
    void(copy);
}

Intern &Intern::operator=(Intern const &other) {
    void(other);
    return (*this);
}

AForm* Intern::makeShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidential(const std::string &target)
{
    return new makePresidential(target);
}