
#pragma once
#include <iostream>


#include "ATarget.hpp"

class ATarget;

class ASpell {

    protected:
        std::string _name;
        std::string _effects;
  

    public:
        ASpell();
        
        ASpell(ASpell const &copy);
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();

        ASpell &operator=(ASpell const &copy);
        
        std::string getEffects() const;
        std::string getName() const;
        
        
        
        virtual ASpell *clone() const = 0;

        void launch(ATarget const &target);

};