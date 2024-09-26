#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects): _name(name), _effects(effects)
{
	//std::cout << name << ": This looks like another boring day." << std::endl;
}


ASpell::~ASpell()
{
  //std::cout << getName() << ": My job here is done!" << std::endl;
}

ASpell & ASpell::operator=(ASpell const & cpy)
{
	this->_name = cpy._name;
	this->_effects = cpy._effects;
	return *this;
}

ASpell::ASpell(ASpell const & obj)
{
	*this = obj;
}

std::string const  &ASpell::getName() const
{
    return(_name);
}

std::string const &ASpell::getEffects() const
{
    return(_effects);
}


void launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}

