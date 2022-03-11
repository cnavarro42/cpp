#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form Constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name), _signed(false), _gradeToSign(signGrade), _gradeToExecute(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form Default Constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form( Form const &copy)  : _name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
    std::cout << "Form Copy Constructor called" << std::endl;
}

std::ostream &operator<<( std::ostream & o, Form const &i)
{
    o << i.getName() << ", Grade to sign: " << i.getGradeToSign() << ", Grade to execute: " << i.getGradeToExecute() << ", is signed?: " << i.getSigned();

    return (o);
}

std::string Form::getName() const
{
    return (this->_name);
}
int Form::getGradeToSign() const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

bool Form::beSigned(int grade, std::string name)
{
    if (grade <= this->_gradeToSign)
        _signed = true;
    else
    {
        std::cout << name << " cannot sign " << this->getName() << " because low grade" << std::endl;
        throw Form::GradeTooLowException();
    }
    return (_signed);
}
