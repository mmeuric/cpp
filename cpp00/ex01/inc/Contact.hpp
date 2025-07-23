/* ************************* */

#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

# include "lib.hpp"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        void setFirstName(const std::string &name);
        void setLastName(const std::string &name);
        void setNickname(const std::string &nick);
        void setPhoneNumber(const std::string &number);
        void setDarkestSecret(const std::string &secret);
};

#endif