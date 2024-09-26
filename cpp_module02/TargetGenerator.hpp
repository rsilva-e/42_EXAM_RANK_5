
#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class ASpell;

class TargetGenerator {

    private:
        std::vector<ATarget*> targets;
        

        TargetGenerator &operator=(TargetGenerator const &copy);
        TargetGenerator(TargetGenerator const &copy);
        

    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target);
        ATarget* createTarget(std::string const &target);

        
};