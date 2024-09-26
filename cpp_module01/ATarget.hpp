
#include <iostream>

#include "ASpell.hpp"

class Atarget
{
private:
    std::string type;

public:
    Atarget(const std::string &name, const std::string &effects);
    Atarget & operator=(Atarget const & rhs);
	Atarget(Atarget const & obj);
    
    
    
    virtual ~Atarget();

    std::string const & getType() const;

    virtual Atarget* clone() const = 0;

    ASpell const & getHitBySpell() const;
};