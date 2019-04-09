
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Form.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm () : Form("Shurberry", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm
(ShrubberyCreationForm const & inst) : Form("Shurberry", 145, 137)
{
	*this = inst;
}

ShrubberyCreationForm::ShrubberyCreationForm
(std::string name) : Form(name, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm	(void) {}

void 			ShrubberyCreationForm::action(std::string target) const
{
	std::ofstream ofs;

	ofs.open(target, std::ofstream::out);
	ofs << "\n\
					.:oso-\n\
                  `.//ssys+-:-.\n\
                --/-::yhs+ossyyoo:\n\
           .://:///syhyhhhhhhoyyhh+` ` ` `\n\
          `-++-:osyyhyyhhhhhhhhhhhy:.+sso-\n\
         :o:os-/syhhy-oyhhhhhhhhhhhyhhhhy/\n\
        -/-/oo-yshhysoo:shhhhhhhhhh/yhhhy+\n\
        ::-ss+:oyyhyhhh/oshhyso//yshhyyyy/\n\
        `///::+y+h++hhhhhhyyhsoyyhhhsooss/+y:`\n\
  `::::-::+-/::+yo/yhhyyyyhhy.oyy/+hhhdhhhyhs+`\n\
 -:::/+++syys:-oyyhhshhysyhhy/ssys+ssshyyyddhy+\n\
 --:-:ohyssyhy+o+shyhoyoyoyyhso+ooosyhhhhhhhhs:\n\
 .-/--yyyshyyhhhhsyyhyohhyyhhyyhhyysshhhhhhhhs\n\
 -:/:::-:/: `./yhhhhhyyshhhhhdddhhhyohhhhhhhho-`\n\
-:/+yyhhhhs   .:+yyhhooho-oyo++hysossysssssyyhhs.\n\
:::-:-/hhyyy/:+/:+sh/ssyhosy/++ssyhhyyhysyysooo+y:\n\
.:-:+//yhyyy:++/syhyoos/ssos+ssyhyhh//hhhhyhhhhhh-\n\
`:/::shhhys+:+oohhyssosyohhsy+--o/shssshyhhhhhhh/\n\
   -:::sy:/::oys++s:+hsssssyo+::/:-./+shy+shhhys\n\
     .-+//y+-//y+ohyy+:+-++:+:        `/+soo/-.\n\
          //-::/. `:-` -/++:\n\
           --..         :oo\n\
                        :+o\n\
                        :+o\n\
                        :++\n\
                        /o+\n\
                     ``./ss`\n\
               ``...--:/://:-.....";
	ofs.close();
}

std::ostream &	operator<<(std::ostream & os,
ShrubberyCreationForm & inst)
{
	std::string status_signed;
	std::string status_executed;

	if (inst.getSignatureStatus() == true)
		status_signed = "signed";
	else
		status_signed = "not signed";
	if (inst.getExecutionStatus() == true)
		status_executed = "executed";
	else
		status_executed = "not executed";
	return (os << inst.getName() + " form: a grade, needed to sign it is - " << inst.getGradeSign()
	<< ". A grade, needed to execute it is - " << inst.getGradeExecute() << "." << std::endl) <<
	"Form's signature status is: " << status_signed << "." << std::endl <<
	"Form's execution status is: " << status_executed << "." << std::endl;
}
