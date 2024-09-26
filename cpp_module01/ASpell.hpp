

#include <iostream>

#include "ATarget.hpp"

class ASpell
{
private:
    std::string _name;
    std::string _effects;
public:
    ASpell(const std::string &name, const std::string &effects);
    ASpell & operator=(ASpell const & rhs);
	ASpell(ASpell const & obj);
    
    virtual ~ASpell();

    std::string const & getName() const;
    std::string const & getEffects() const;

    virtual ASpell* clone() const = 0;
    void launch(ATarget const &target) const;
};