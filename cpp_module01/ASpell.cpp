

#include "ASpell.hpp"

ASpell::ASpell() : _name(), _effects(){}

ASpell::ASpell(ASpell const &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(ASpell const &copy)
{
    if(this == &copy)
        return(*this);
    _name = copy.getName();
    _effects = copy.getEffects();
    return(*this);
}

ASpell::ASpell(std::string const &name, std::string const &effects): _name(name),_effects(effects){}
ASpell::~ASpell(){}

std::string ASpell::getEffects() const
{
    return(this->_effects);
}

std::string ASpell::getName() const
{
    return(this->_name);
}


void ASpell::launch(ATarget const &target)
{
    target.getHitBySpell(*this);
}