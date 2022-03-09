#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

class MateriaSource : public IMateriaSource
{
    private:
        bool    _iKnowIce;
        bool    _iKnowCure;
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource( MateriaSource const &src);
        MateriaSource &operator=( MateriaSource const &rhs);

        virtual void learnMateria(AMateria *mat);
        virtual AMateria* createMateria(std::string const & type);
};
