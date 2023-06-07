#include "../includes/Span.hpp"

/*_______________________Constructors / Destructor_______________________*/

Span::Span(): _N(0){}

Span::Span(unsigned int N) {
	_N = N;
}

Span::Span(const Span &cpy): _N(cpy._N), array(cpy.array) {
	// *this = cpy;
}

Span::~Span() {}

Span&	Span::operator=(const Span &obj) {
	array = obj.array;
	_N = obj._N;
	return (*this);
}

/*_______________________Operator / Get_______________________*/

std::ostream&	operator<<(std::ostream& os, Span const& obj) {
	os << "Array size: [" << obj.getSize() << "]" << std::endl;
	return (os);
}

unsigned int	Span::getSize(void) const {
	return (_N);
}

/*_______________________Member functions_______________________*/

void	Span::addNumber(int nb) {
	if (array.size() < static_cast<std::vector<int>::size_type>(_N))
		array.push_back(nb);
	else
		throw DequeFullException();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator X)
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

unsigned int	Span::shortestSpan(void) {
	if (array.size() < 2)
		throw SpanException();
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

unsigned int	Span::longestSpan(void) {
	if (array.size() < 2)
		throw SpanException();
	int	min = *std::min_element(array.begin(), array.end());
	int	max = *std::max_element(array.begin(), array.end());
	return (max - min);
}


/*__________Exceptions___________*/

const char* Span::DequeFullException::what() const throw()
{
	return "Exception: DequeFullException";
}

const char* Span::SpanException::what() const throw()
{
	return "SpanException: at least 2 numbers are required.";
}
