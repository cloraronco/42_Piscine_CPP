#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <ctime>

#define K 1

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &src);
		PmergeMe(int nb_args, char **args);
		~PmergeMe(void);

		PmergeMe &operator=(PmergeMe const &rhs);

		void	sort();
		std::vector<int> sort_vector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		std::set<int> sort_set(std::set<int>::iterator begin, std::set<int>::iterator end);

		bool	isValid() const;

		void	print_before();
		void	print_after(std::vector<int> &v);

	private:
		std::vector<int> _vector;
		std::set<int> _set;
		bool	_valid;
};