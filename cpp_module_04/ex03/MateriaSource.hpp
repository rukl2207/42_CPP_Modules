#pragma once

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define MATERIASOURCE_SIZE 4

class MateriaSource: public IMateriaSource
{
 public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& other );
	MateriaSource& operator= (const MateriaSource& other);

	virtual ~MateriaSource( void );

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);

 private:
	AMateria* _materia_types[MATERIASOURCE_SIZE];
};

#endif
