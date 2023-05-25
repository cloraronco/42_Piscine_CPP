#include "../includes/Iter.hpp"

void    display0(int const& i)
{
    std::cout << i << std::endl;
}

template <typename T>
void    display0T(T const& t)
{
    std::cout << t << std::endl;
}

int main( void )
{
    int tab[4] = {1, 2, 3, 4};
    iter(tab, 4, display0);
    iter(tab, 4, display0T);
    std::string ts[3] = {
    "Salut",
    "Bien ?",
    "Ou quoi !"
    };
    iter(ts, 3, display0T);
    return (0);
}