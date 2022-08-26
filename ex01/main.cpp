#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int	main(void)
{
	const	ASpell	A1("Jack", "magie");
	const	ATarget	Tar1("Helloworld");

	Tar1.getType();

	const	Dummy	D1;

	Tar1.getType();

	return (0);
}
