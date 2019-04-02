
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
public:

	void			set_zombie_type(std::string your_type);
	void			set_zombie_name(std::string your_name);
	std::string		get_zombie_type(void);
	std::string		get_zombie_name(void);
	void			announce(std::string type, std::string name) const;
private:
	std::string		type;
	std::string		name;
};

#endif
