#include "Warlock.hpp"

Warlock::Warlock(void)
{
	return ;
}

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day.\n";
}

Warlock::Warlock(const Warlock& src)
{
	*this = src;
}

Warlock&	Warlock::operator=(const Warlock& rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;

	return (*this);
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!\n";
	return ;
}


// Function

const std::string&    Warlock::getName(void) const
{
	return (this->_name);
}

const std::string&    Warlock::getTitle(void) const
{
	return (this->_title);
}

void    Warlock::setTitle(const std::string& title)
{
	this->_title = title;
}

void Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << " !\n";
}
