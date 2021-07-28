#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>

typedef struct	s_data
{
	int			id_num;
	std::string	name;
	float		height;
}				Data;

class Serializer
{
	private:
		uintptr_t _raw_data;

	public:
		Serializer();
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& obj);
		virtual ~Serializer();
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

		/* declare member function */
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Serializer& serializer);

#endif
