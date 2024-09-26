

#include "Warlock.hpp"


Warlock::Warlock()
{

}

Warlock::Warlock(const Warlock &copy)
{
    *this = copy;
}

Warlock &Warlock::operator=(Warlock const &copy)
{
    _name = copy._name;
    _title = copy._title;
    return(*this);
}

Warlock::Warlock(std::string const &name, std::string const &title): _name(name),_title(title)
{
   std::cout << getName() << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getTitle() const
{
    return(this->_title);
}

std::string const &Warlock::getName() const
{
    return(this->_name);
}

void Warlock::setTitle(std::string const &str)
{
    this->_title = str;
}

void Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}