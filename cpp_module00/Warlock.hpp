
#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string.h>
#include <iostream>

class Warlock
{

    private:
        std::string name;
        std::string title;

        Warlock();
        
        Warlock &operator=(Warlock const &copy);
        Warlock(Warlock const &copy);
        
        

    public:
        Warlock(std::string const &newname, std::string const &newtitle);
        ~Warlock();

        std::string const &getName() const ;
        std::string const &getTitle() const;

        void setTitle(std::string const &newtitle);


        void introduce() const;




};


#endif