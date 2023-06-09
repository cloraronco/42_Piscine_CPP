#include "../includes/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Usage: ./PmergeMe <list of positive integers>" << std::endl;
        return 1;
    }

    PmergeMe sorter(ac - 1, av + 1);
    if (!sorter.isValid())
        return 1;
    sorter.sort();
}