#pragma once
#include "AMateria.hpp"

class ICharacter
{
	public:
		ICharacter(void);
		ICharacter(const ICharacter &cpy);
		virtual ~ICharacter(void);
		
		ICharacter	&operator=(const ICharacter &cpy);

		std::string const	&getType(void) const;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};
