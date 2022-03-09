#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const type);
        Ice( Ice const &src);
        virtual ~Ice();
        Ice &operator=( Ice const & rhs);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif