#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

void	init_data(Data *dt)
{
	dt->name = "test";
	dt->level = 'A';
	dt->x = 21;
	dt->y = 2.1f;
	dt->z = 4.2;
}

void	print_data(Data *dt)
{
	std::cout << "\tname:\t" << dt->name << std::endl \
	<< "\tlevel:\t" << dt->level << std::endl \
	<< "\tx:\t" << dt->x << std::endl \
	<< "\ty:\t" << dt->y << std::endl \
	<< "\tz:\t" << dt->z << std::endl;
}

int main ()
{
	std::cout << "==============================================" << std::endl;
	Data *dt1 = new Data();
	init_data(dt1);
	std::cout << "Origin data:" << std::endl;
	print_data(dt1);

	uintptr_t raw = serialize(dt1);
	std::cout << "Serialized raw:\t" << raw << std::endl;

	Data *dt2 = deserialize(raw);
	std::cout << "Deserialized data:" << std::endl;
	print_data(dt2);

	delete dt1;
	std::cout << "==============================================" << std::endl;
//	system("leaks serialization");
	return 0;
}
