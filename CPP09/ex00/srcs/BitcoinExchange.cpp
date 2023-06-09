#include "../includes/BitcoinExchange.hpp"

/*------------ Constructor / Destructor --------------*/

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::ifstream &file)
{
	std::string	line;
	std::getline(file, line);

	while (file.good())
	{
		std::getline(file, line);
		if (line.length() > 0)
		{
			std::string	date = line.substr(0, line.find_first_of(','));
			std::string	rate = line.substr(line.find_first_of(',') + 1);
			if (!_is_valid_date(date) || !_is_valid_rate(rate) || atof(rate.c_str()) < 0)
			{
				std::cerr << RED << "Error: bad input => " << line << RESET << std::endl;
				std::exit(1);
			}
			this->_rates[date] = atof(rate.c_str());
		}
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy){
	*this = cpy;
}

BitcoinExchange::~BitcoinExchange(void) {}


/*-------------- Overloading operator ----------------*/

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->_rates = rhs._rates;
	}
	return (*this);
}


/*---------------- Member functions ------------------*/

bool	BitcoinExchange::_is_valid_date(const std::string &date)
{
	struct tm	tm;

	char	*time = strptime(date.c_str(), "%Y-%m-%d", &tm);
	if (!time || *time)
		return (false);
	return (true);
}

bool	BitcoinExchange::_is_valid_rate(const std::string &rate)
{
	const std::string				pattern("^[0-9]+(\\.[0-9]+)?$");
	const std::string::size_type	len = rate.length();

	if (len == 0)
		return false;
	for (std::string::size_type i = 0; i < len; i++)
	{
		const char ch = rate[i];
		if (!(isdigit(ch) || ch == '.'))
			return false;
	}
	const std::string::size_type	dotPos = rate.find('.');
	if (dotPos != std::string::npos && dotPos == len - 1)
		return false;

	return true;
}

void	BitcoinExchange::process(const std::string &line)
{
	if (line.length() == 0)
		return;

	std::string date = line.substr(0, line.find_first_of('|') - 1);
	std::string rate = line.substr(line.find_first_of('|') + 2);
	double nb = atof(rate.c_str());
	if (nb < 0)
	{
		std::cerr << RED << "Error: not a positive number." << RESET  << std::endl;
		return;
	}
	if (!_is_valid_date(date) || !_is_valid_rate(rate))
	{
		std::cerr << RED << "Error: bad input => " << line << RESET << std::endl;
		return;
	}
	if (nb > 1000)
	{
		std::cerr << RED << "Error: too large number." << RESET << std::endl;
		return;
	}

	std::map<std::string, double>::iterator it = this->_rates.upper_bound(date);
	if (it != this->_rates.begin())
	{
		--it;
	}

	std::cout << date << " => " << rate << " = " << (nb * it->second) << std::endl;
}