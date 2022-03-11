#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
    {
        std::cout << "Hola" << std::endl;
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150)
    {
        std::cout << "Adios" << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &assig)
{
    std::cout << "Bureaucrat Assignment operator called" << std::endl;
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

void Bureaucrat::signForm(Form &form)
{
    if (form.beSigned(this->_grade, this->_name))
        std::cout << this->_name << " signs " << form.getName() << " correctly" << std::endl;
    else
        std::cout << this->_name << " cannot sign " << form.getName() << " because low grade" << std::endl;
}