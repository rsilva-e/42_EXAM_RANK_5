

#include <iostream>


class Warlock {

    private:
        std::string _name;
        std::string _title;
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
};