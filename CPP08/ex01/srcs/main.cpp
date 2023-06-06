#include "../includes/Span.hpp"

int main()
{
	Span sp = Span(5);

	std::cout << "---Main test---" << std::endl;
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << GREEN << sp.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << sp.longestSpan() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}


	/*___________________________________________________________________________*/

	std::cout << "---Oversize test---" << std::endl;
	try
	{
		sp.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}


	/*___________________________________________________________________________*/

	Span sp1 = Span(5);

	std::cout << "---Span exceptions---" << std::endl;
	try
	{
		sp1.addNumber(6);
		std::cout << GREEN << sp1.shortestSpan() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		std::cout << GREEN << sp1.longestSpan() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}


	/*___________________________________________________________________________*/

	std::cout << "---Range of iterators test---" << std::endl;

	std::vector<int> v;
	std::srand(time(NULL));
	int size = 1000000;
	for(int i = 0; i < size; i++)
	{
		v.push_back(rand());
	}

	Span sp5 = Span(size);

	try
	{
		sp5.addNumber(v.begin(), v.end());
		std::cout << GREEN << sp5.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << sp5.longestSpan() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
