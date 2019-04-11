
#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>

class Serialize
{
public:

	Serialize			(void);
	Serialize			(Serialize const & inst);
	~Serialize			(void);

	Serialize &			operator=(Serialize const & inst);
	void *				serialize(void);
	Data *				deserialize(void * raw);
private:

};

#endif
