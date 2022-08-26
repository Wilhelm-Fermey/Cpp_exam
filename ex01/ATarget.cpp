#include "ATarget.hpp"

ATarget::ATarget(void)
{
	return ;
}

ATarget::ATarget(const std::string& attribute) : _attribute(attribute)
{
	return ;
}

ATarget::ATarget(const ATarget& src)
{
	*this = src;
}

ATarget&	ATarget::operator=(const ATarget& rhs)
{
	this->_attribute = rhs._attribute;

	return (*this);
}

ATarget::~ATarget(void)
{
	return ;
}


// Function

const std::string&	ATarget::getType(void) const
{
	return (this->_attribute);
}

void    ATarget::getHitBySpell(const ASpell& src) const
{
	std::cout << this->getType() << " has been " << src.getEffects() << std::endl;
}
