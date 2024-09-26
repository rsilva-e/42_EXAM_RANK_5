


#include <iostream>


class Warlock
{
private:
    std::string _name;
    std::string _title;
    Warlock & operator=(Warlock const & rhs);
	Warlock(Warlock const & obj);
    Warlock();


public:
    Warlock(const std::string &name, const std::string &title);
    ~Warlock();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const &title);
    void introduce() const;
};




