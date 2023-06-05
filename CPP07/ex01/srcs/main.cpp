#include "../includes/iter.hpp"

void    functionF(int const& i)
{
    std::cout << i << std::endl;
}

template <typename T>
void    functionT(T const& t)
{
    std::cout << t << std::endl;
}

int main( void )
{
    int tab[4] = {1, 2, 3, 4};
    iter(tab, 4, functionF);
    iter(tab, 4, functionT);
    std::string ts[3] = {
    "Ligne 1",
    "Ligne 3",
    "bah oui"
    };
    iter(ts, 3, functionT);
    return (0);
}


/*_____Subject main_____*/

// class Awesome
// {
//     public:
//         Awesome(void):_n(42) {return;}
//         int get(void) const {return _n;}
//     private:
//         int _n;
// };
// std::ostream &operator<<(std::ostream &o, Awesome const& rhs) {
//     o << rhs.get();
//     return o;
// }

// template< typename T>
// void print(T const& x) {
//     std::cout << x << std::endl;
//     return;
// }

// int main()
// {
//     int tab[] = {0, 1, 2, 3, 4};
//     Awesome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);

//     return 0;
// }