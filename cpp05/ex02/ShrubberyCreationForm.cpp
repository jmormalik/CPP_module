#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target)
	:AForm("ShrubberyCreationForm", 145, 137),
	_target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj)
	:AForm(obj),
	_target(obj._target) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

void ShrubberyCreationForm::executeAction() const
{
	std::string filename = this->_target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return;
	}
	outfile << "       _-_       " << std::endl;
    outfile << "    /~~   ~~\\    " << std::endl;
    outfile << " /~~         ~~\\ " << std::endl;
    outfile << "{               }" << std::endl;
    outfile << " \\  _-     -_  / " << std::endl;
    outfile << "   ~  \\\\ //  ~   " << std::endl;
    outfile << "       | |       " << std::endl;
    outfile << "       | |       " << std::endl;
    outfile << "      // \\\\      " << std::endl;

	outfile.close();
}
