

#include "Atarget.hpp"

Atarget::Atarget(std::string const &type): _type(type)
{
	//std::cout << name << ": This looks like another boring day." << std::endl;
}


Atarget::~Atarget()
{
  //std::cout << getName() << ": My job here is done!" << std::endl;
}

Atarget & Atarget::operator=(Atarget const & cpy)
{
	this->_name = cpy._name;
	this->_effects = cpy._effects;
	return *this;
}

Atarget::Atarget(Atarget const & obj)
{
	*this = obj;
}

std::string const &Atarget::getType() const;
{
    return(_type);
}


ASpell const  &Atarget::getHitBySpell() const
{
    std::cout << getType() << " has been " << getEffects() << "!" << std::endl;
    std::cout << getType() << " is the ATarget's type, and " << getEffects() << " is the return of the ASpell's
getEffects function." << std::endl;
}