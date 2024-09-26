

#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock &copy)
{
    *this = copy;
}

Warlock &Warlock::operator=(Warlock const &copy)
{
    name = copy.getName();
    title = copy.getTitle();
    return(*this);

}

Warlock::Warlock(std::string const &newname, std::string const &newtitle) : name(newname),title(newtitle)
{
   std::cout << getName() << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!" << std::endl;
}
const std::string &Warlock::getName() const
{
    return(name);
}
const std::string &Warlock::getTitle() const
{
    return(title);
}

void Warlock::setTitle(std::string const &newtitle)
{
    title = newtitle;
}


void Warlock::introduce() const
{
    std::cout << getName() << ": I am "  << getName() << ", " << getTitle() << "!" << std::endl;
}