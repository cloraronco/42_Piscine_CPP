#include "../includes/BitcoinExchange.hpp"

/*_______________________Constructors / Destructor_______________________*/

BitcoinExchange::BitcoinExchange(): _N(0){}

BitcoinExchange::BitcoinExchange(unsigned int N) {
	_N = N;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy): _N(cpy._N), array(cpy.array) {
	// *this = cpy;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &obj) {
	array = obj.array;
	_N = obj._N;
	return (*this);
}

/*_______________________Operator / Get_______________________*/

std::ostream&	operator<<(std::ostream& os, BitcoinExchange const& obj) {
	os << "Array size: [" << obj.getSize() << "]" << std::endl;
	return (os);
}

unsigned int	BitcoinExchange::getSize(void) const {
	return (_N);
}

/*_______________________Member functions_______________________*/

void	BitcoinExchange::addNumber(int nb) {
	if (array.size() < static_cast<std::vector<int>::size_type>(_N))
		array.push_back(nb);
	else
		throw DequeFullException();
}

void	BitcoinExchange::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator X)
{
	while (begin < X)
	{
		if ((unsigned int)(array.size()) <= static_cast<size_t>(_N))
		{
			array.push_back(*begin);
		}
		begin++;
	}
	if (begin != X)
		throw std::logic_error("Array already full.");
}

unsigned int	BitcoinExchange::shortestBitcoinExchange(void) {
	if (array.size() < 2)
		throw BitcoinExchangeException();
	std::sort(array.begin(), array.end());
	unsigned int	gap = UINT_MAX;
	for (size_t i = 0; i < array.size() - 1; i++)
	{
		unsigned int tmp = array[i + 1] - array[i];
		if (tmp < gap)
			gap = tmp;
	}
	return (gap);
}

unsigned int	BitcoinExchange::longestBitcoinExchange(void) {
	if (array.size() < 2)
		throw BitcoinExchangeException();
	int	min = *std::min_element(array.begin(), array.end());
	int	max = *std::max_element(array.begin(), array.end());
	return (max - min);
}


/*__________Exceptions___________*/

const char* BitcoinExchange::DequeFullException::what() const throw()
{
	return "Exception: DequeFullException";
}

const char* BitcoinExchange::BitcoinExchangeException::what() const throw()
{
	return "BitcoinExchangeException: at least 2 numbers are required.";
}
