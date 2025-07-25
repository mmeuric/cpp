#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        size_t  _grade;
    public:
        
        //Clasic functions
        Bureaucrat();
        Bureaucrat( std::string name, size_t grade );
        ~Bureaucrat();
        Bureaucrat( Bureaucrat const& copy );
        Bureaucrat& operator=( const Bureaucrat& other );

        //Getters functions
        const std::string getName();
        size_t getGrade();

        //Increment/decrement grade
        void incGrade();
        void decGrade();

        //Other functions
        void signForm( Form& form );

        //Exceptions functions
        class GradeToohighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too high!";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too low!";
                }
        };
};

std::ostream &operator<<( std::ostream &out, Bureaucrat &_bureaucrat );

#endif