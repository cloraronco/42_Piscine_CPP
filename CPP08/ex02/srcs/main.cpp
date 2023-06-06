#include "../includes/MutantStack.hpp"

int main()
{
	std::cout << "---MutantStack---" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << YELLOW << mstack.size() << RESET << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << GREEN << *it << RESET << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	//_________________________________________________________________

	std::cout << "---List test---" << std::endl;

	std::list<int> myList;

	myList.push_back(5);
	myList.push_back(17);

	std::cout << myList.back() << std::endl;

	myList.pop_back();

	std::cout << YELLOW << myList.size() << RESET << std::endl;


	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	//[...]
	myList.push_back(0);

	std::list<int>::iterator itt = myList.begin();
	std::list<int>::iterator itte = myList.end();

	++itt;
	--itt;
	while (itt != itte)
	{
		std::cout << GREEN << *itt << RESET << std::endl;
		++itt;
	}
	return 0;
}