#include "../includes/easyfind.hpp"

int main( void )
{
	std::list<int>		list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	try
	{
		easyfind(list, 1);
		easyfind(list, 2);
		easyfind(list, 4);
		easyfind(list, 32);
		easyfind(list, 3);
	}
	catch(const std::exception& e)
    {
		std::cerr << e.what() << std::endl;
    }
    return (0);
}