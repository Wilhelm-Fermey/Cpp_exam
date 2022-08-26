#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(void);
		ASpell(const std::string& name, const std::string& title);
		ASpell(const ASpell& src);
		ASpell&	operator=(const ASpell& rhs);
		virtual ~ASpell(void);

		const std::string&	getName(void) const;
		const std::string&	getEffects(void) const;
		void	launch(const ATarget& src) const;
//		virtual ASpell*		clone() const = 0;

	protected:
		std::string _name;
		std::string _effects;

};




# endif
