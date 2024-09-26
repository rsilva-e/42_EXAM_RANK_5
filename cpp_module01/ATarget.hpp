
#pragma once
#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget {

    protected:
        std::string _type;
  

    public:
        ATarget();
        ATarget(ATarget const &copy);
        ATarget(std::string const &type);
        virtual ~ATarget();
        
        std::string const &getType() const;

        ATarget &operator=(ATarget const &copy);
        
        
        
        virtual ATarget *clone() const = 0;  


        void getHitBySpell(ASpell const &spell) const;


};