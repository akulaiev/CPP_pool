
#include "../includes/Data.hpp"
#include <iostream>
#include <sstream>

void *	serialize(void)
{
	std::string			res;
	std::stringstream	tmp;
	char				str0[9];
	char				str1[9];
	int					num;
	char				alph_num[63] =
	"abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));
	int iter = -1;
	while (++iter < 8)
		str0[iter] = alph_num[rand() % 62];
	str0[8] = '\0';
	iter = -1;
	while (++iter < 8)
		str1[iter] = alph_num[rand() % 62];
	str1[8] = '\0';
	num = rand() % 2147483646;
	tmp << str0 << num << str1;
	res = tmp.str();
	char *c_res = new char[res.length() + 1];
	strcpy(c_res, res.c_str());
	return (reinterpret_cast<void*>(c_res));
}

Data *	deserialize(void *raw)
{
	Data		*data = new Data;
	char		str0[9];
	char		str1[9];
	int			num;

	char *c_data = reinterpret_cast<char*>(raw);
	int i = -1;
	while (++i < 8)
		str0[i] = c_data[i];
	str0[8] = '\0';
	int j = strlen(c_data);
	i = 9;
	while (--i > -1)
	{
		str1[i] = c_data[j];
		j--;
	}
	str1[8] = '\0';
	num = atoi(&c_data[8]);
	data->n = num;
	std::string	st1(str0);
	std::string	st2(str1);
	data->s1 = st1;
	data->s2 = st2;
	return (data);
}

int 	main(void)
{
	void *data = serialize();
	std::cout << "Concantinated data: " << static_cast<char*>(data) << std::endl;
	Data *data_struct = deserialize(data);
	std::cout << "S1 in data struct: " << data_struct->s1 << std::endl;
	std::cout << "NUM in data struct: " << data_struct->n << std::endl;
	std::cout << "S2 in data struct: " << data_struct->s2 << std::endl;
}
