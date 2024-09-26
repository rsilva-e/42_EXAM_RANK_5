

#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(const TargetGenerator &copy){*this = copy;}
TargetGenerator &TargetGenerator::operator=(TargetGenerator const &copy)
{
    if(this == &copy)
        return(*this);
    return(*this);
}
TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}



void TargetGenerator::learnTargetType(ATarget *target)
{
    std::vector<ATarget*>::iterator it;
    if(target)
    {
        for(it = targets.begin();it != targets.end(); it++)
        {
            if((*it)->getType() == target->getType())
            {
                return;
            }
        }
        targets.push_back(target);
    }
}
void TargetGenerator::forgetTargetType(std::string const &target)
{
    std::vector<ATarget*>::iterator it;

    for(it = targets.begin();it != targets.end(); it++)
    {
        if((*it)->getType() == target)
        {
            targets.erase(it);
            return;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    std::vector<ATarget*>::iterator it;
	for(it = this->targets.begin(); it != this->targets.end(); it++)
	{
		if((*it)->getType() == target)
		{
			return(*it)->clone();
		}
	}
    return(NULL);
}