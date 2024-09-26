
#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"



class Warlock {

    private:
        std::string _name;
        std::string _title;
        std::vector<ASpell*> spells;
        
        Warlock();
        Warlock &operator=(Warlock const &copy);
        Warlock(Warlock const &copy);
        

    public:

        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        
        std::string const &getTitle() const;
        std::string const &getName() const;
        void setTitle(std::string const &str);
       
        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellname);
        void launchSpell(std::string spellname , ATarget &target);
};