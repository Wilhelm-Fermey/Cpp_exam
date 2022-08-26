#include "ASpell.hpp"

ASpell::ASpell(void)
{
	return ;
}

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
{
	return ;
}

ASpell::ASpell(const ASpell& src)
{
	*this = src;
}

ASpell&	ASpell::operator=(const ASpell& rhs)
{
	this->_name = rhs._name;
	this->_effects = rhs._effects;

	return (*this);
}

ASpell::~ASpell(void)
{
	return ;
}


// Function

const std::string&    ASpell::getName(void) const
{
	return (this->_name);
}

const std::string&    ASpell::getEffects(void) const
{
	return (this->_effects);
}

void    ASpell::launch(const ATarget& src) const
{
	src.getHitBySpell(*this);
}
