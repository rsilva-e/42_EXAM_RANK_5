
#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class ASpell;

class SpellBook {

    private:
        std::vector<ASpell*> spells;
        

        SpellBook &operator=(SpellBook const &copy);
        SpellBook(SpellBook const &copy);
        

    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellname);
        ASpell* createSpell(std::string const &spellname);
        
};