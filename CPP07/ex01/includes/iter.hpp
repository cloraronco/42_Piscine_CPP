#pragma once
#include <iostream>

template <typename T>
void iter(T *tab, int lenght, void(*f)(T const&))
{
	for (int i = 0; i < lenght; i++)
		f(tab[i]);
}