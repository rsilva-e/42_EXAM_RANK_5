

#include "SpellBook.hpp"


SpellBook::SpellBook(const SpellBook &copy){*this = copy;}
SpellBook &SpellBook::operator=(SpellBook const &copy)
{
    if(this == &copy)
        return(*this);
    return(*this);
}
SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}


void SpellBook::learnSpell(ASpell *spell)
{
    if(spell)
    {
        std::vector<ASpell*>:: iterator it;
        for (it = spells.begin(); it!= this->spells.end() ; it++)
        {
            if((*it)->getName() == spell->getName())
                return;
        }
        spells.push_back(spell->clone());
    }
        
}

void SpellBook::forgetSpell(std::string const &spellname)
{
    std::vector<ASpell*>:: iterator it;
    for (it = spells.begin(); it!= this->spells.end() ; it++)
    {
        if((*it)->getName() == spellname)
        {
            delete *it;
            spells.erase(it);
            return;
        }   
    }
}

ASpell* SpellBook::createSpell(std::string const &spellname)
{
    std::vector<ASpell*>:: iterator it;
    for (it = spells.begin(); it!= this->spells.end() ; it++)
    {
        if((*it)->getName() == spellname)
        {
            return(*it)->clone();
        }   
    }
    return(NULL);
}
