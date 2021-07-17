#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <string>
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		/* declare member variable */
		AMateria*	_learned[4];
		int			_learned_num;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource& obj);
		virtual ~MateriaSource();

		/* declare member function */
		void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const MateriaSource& materiaSource);

#endif
