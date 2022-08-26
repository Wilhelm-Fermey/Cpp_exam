#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(void);
		ATarget(const std::string& attribute);
		ATarget(const ATarget& src);
		ATarget&	operator=(const ATarget& rhs);
		~ATarget(void);

		const std::string&		getType(void) const;
		void	getHitBySpell(const ASpell& src) const;

	protected:
		std::string _attribute;
};


#endif
