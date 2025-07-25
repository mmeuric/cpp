#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>
#include "AForm.hpp"

class AForm;

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
        const std::string getName() const;
        size_t getGrade() const;

        //Increment/decrement grade
        void incGrade();
        void decGrade();

        //Other functions
        void signForm( AForm& form );
        virtual void executeForm( AForm const& form ) const;

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