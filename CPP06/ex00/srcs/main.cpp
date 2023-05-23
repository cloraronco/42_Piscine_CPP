#include "../includes/Convert.hpp"

int main(int argc, char **argv)
{
	Convert	conversion;
	if (argc != 2)
	{
		std::cerr << "One argument required." << std::endl;
		return (1);
	}
	try
	{
		conversion.detect_type(argv[1]);
		conversion.convert_data();
		conversion.print_data();
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
		std::cout << RED << "Conversion aborted. Check back arguments." << RESET << std::endl;
	}
	return (0);
}