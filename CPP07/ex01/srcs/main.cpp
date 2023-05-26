#include "../includes/Iter.hpp"

// void    display0(int const& i)
// {
//     std::cout << i << std::endl;
// }

// template <typename T>
// void    display0T(T const& t)
// {
//     std::cout << t << std::endl;
// }

// int main( void )
// {
//     int tab[4] = {1, 2, 3, 4};
//     iter(tab, 4, display0);
//     iter(tab, 4, display0T);
//     std::string ts[3] = {
//     "Salut",
//     "Bien ?",
//     "Ou quoi !"
//     };
//     iter(ts, 3, display0T);
//     return (0);
// }

class Awesome
{
    public:
        Awesome(void):_n(42) {return;}
        int get(void) const {return _n;}
    private:
        int _n;
};
std::ostream &operator<<(std::ostream &o, Awesome const& rhs) {o << rhs.get(); return o;}

template< typename T>
void print(T const& x) {std::cout << x << std::endl; return;}

int main()
{
    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);

    return 0;
}