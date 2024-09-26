

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock()
{
}

Warlock::~Warlock()
{
  std::cout << getName() << ": My job here is done!" << std::endl;
}

Warlock & Warlock::operator=(Warlock const & cpy)
{
	this->_name = cpy._name;
	this->_title = cpy._title;
	return *this;
}

Warlock::Warlock(Warlock const & obj)
{
	*this = obj;
}

std::string const  &Warlock::getName() const
{
    return(_name);
}

std::string const &Warlock::getTitle() const
{
    return(_title);
}

void Warlock::setTitle( const std::string &newtitle) 
{
    _title = newtitle;
}

void Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

