#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock(void);

		const std::string&	getName(void) const;
		const std::string&	getTitle(void) const;
		void				setTitle(const std::string& title);
		void 				introduce(void) const;
		void				learnSpell(ASpell* src);


	private:
		Warlock(void);
		Warlock(const Warlock& src);
		Warlock&	operator=(const Warlock& rhs);

		std::string _name;
		std::string _title;

};



#endif
