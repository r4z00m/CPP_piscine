#include "ShrubberyCreationForm.hpp"

#define ASCII_TREE \
"          &&& &&  & &&\n"\
"      && &\\/&\\|& ()|/ @, &&\n"\
"      &\\/(/&/&||/& /_/)_&/_&\n"\
"   &() &\\/&|()|/&\\/ '%' & ()\n"\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"\
"&&   && & &| &| /& & % ()& /&&\n"\
" ()&_---()&\\&\\|&&-&&--%---()~\n"\
"     &&     \\|||\n"\
"             |||\n"\
"             |||\n"\
"             |||\n"\
"       , -=-~  .-^- _\n"\
"		       `\n"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm)
: Form("ShrubberyCreationForm", 145, 137), target(shrubberyCreationForm.target) {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->getSigned()) {
		throw Form::NotSignedException("Form is not signed!");
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException("Grade too low");
	}
	std::ofstream filestream(this->target + "_shrubbery");
	if (filestream.is_open()) {
		filestream << ASCII_TREE;
		filestream.close();
	} else {
		std::cerr << "Error: can't create file!" << endl;
	}
}