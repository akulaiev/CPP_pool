
#include "../includes/Intern.hpp"
#include "../includes/CentralBureaucracy.hpp"
#include "../includes/OfficeBlock.hpp"
#include "../includes/Form.hpp"
#include <iostream>

CentralBureaucracy::CentralBureaucracy	(void)
{
	int i = -1;

	while (++i < 20)
		_offices[i].setIntern(*(new Intern()));	
}

CentralBureaucracy::CentralBureaucracy	(CentralBureaucracy
& inst)
{
	*this = inst;
}

CentralBureaucracy::~CentralBureaucracy			(void) {}

CentralBureaucracy &	
CentralBureaucracy::operator=(CentralBureaucracy
& inst)
{
	Bureaucrat *temp = NULL;
	for (int i = 0; i < 20; i++)
	{
		this->_offices[i] = inst._offices[i];
		this->_offices[i].setIntern(*(new Intern()));
		if (inst._offices[i].getExecute())
		{
			temp = new Bureaucrat(*(inst._offices[i].getExecute()));
			this->_offices[i].setExecutor(*temp);
		}
		if (inst._offices[i].getSign())
		{
			temp = new Bureaucrat(*(inst._offices[i].getSign()));
			this->_offices[i].setSigner(*temp);
		}
	}
	for(int i = 0; i < 39; i++)
	{
		this->_targets[i] = inst._targets[i];
	}
	return *this;
}

void			CentralBureaucracy::feedSigner(Bureaucrat sign)
{
	int i = -1;

	while(++i < 20)
	{
		if (_offices[i].getSign() == NULL)
			_offices[i].setSigner(sign);
		return ;
	}
	std::cout << "Sorry, but our offices are now fully set with signers."
	<< std::endl;
}

void			CentralBureaucracy::feedExecutor(Bureaucrat exec)
{
	int i = -1;

	while(++i < 20)
	{
		if (_offices[i].getExecute() == NULL)
			_offices[i].setExecutor(exec);
		return ;
	}
	std::cout << "Sorry, but our offices are now fully set with executors."
	<< std::endl;
}

void				CentralBureaucracy::queueUp(std::string	target)
{
	int i = -1;

	while (++i < 39)
	{
		if (_targets[i].empty())
			_targets[i] = target;
		return ;
	}
	std::cout << "Sorry, but the t_targets is full."
	<< std::endl;
}

void				CentralBureaucracy::doBureaucracy()
{
	std::string form_types[3] =
	{
		"Robotomy",
		"Presidential",
		"Shrubbery"
	};
	int i = -1;
	while (++i < 39)
	{
		if (!(this->_targets[i].empty()))
		{
			int j = -1;
			while (++j < 20)
			{
				srand(clock());
				int	index = rand() % 2;
				try
				{
					this->_offices[j].doBureaucracy(form_types[index], this->_targets[i]);
				}
				catch(std::exception &ex)
				{
					std::cout << ex.what() << std::endl;
				}
			}
		}
	}
	std::cout << std::endl << "I guess, that's all for today!!!" << std::endl;
}
