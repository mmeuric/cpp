

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int count;
    public:
        PhoneBook();
        void ft_add();
        void ft_search();
        std::string truncate(const std::string& str);
        void print_contact(int index);
};

void    ft_exit(void);

#endif