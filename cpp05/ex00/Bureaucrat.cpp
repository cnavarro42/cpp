#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Default Constructor called" << std::endl;
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
    std::cout << "Copy Constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    this->_grade = assig.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

std::ostream &operator<<( std::ostream & o, Bureaucrat const &i)
{
    o << i.getName() << ", Bureaucrat grade " << i.getGrade();

    return (o);
}

void Bureaucrat::incrementGrade(int grades)
{
    if ((this->getGrade() - grades) < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= grades;
}

void Bureaucrat::decrementGrade(int grades)
{
    if ((this->getGrade() + grades) > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += grades;
}