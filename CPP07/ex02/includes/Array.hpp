#pragma once
#include <iostream>
#include <cstdlib>

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"

template <typename T> class Array
{
	private:
		T*		_array;
		size_t	_size;

	public:
//constructors / destructor
		Array(): _array(NULL), _size(0) {}
		Array(unsigned int i)
		{
			_array = new T[i];
			_size = (size_t)i;
		}
		Array(const Array &cpy): _size(cpy._size)
		{
			_array = new T[cpy._size];
			for(size_t i = 0; i < cpy._size; ++i)
				_array[i] = cpy[i]; 
			return ;
		}
		~Array()
		{
			delete []_array;
		}

//overloadings op
		T*	&operator=(const Array &obj)
		{
			delete[] _array;
			_array = new T[obj._size];
			_size = obj._size;
			for (size_t i = 0; i < obj._size; i++)
			{
				_array[i] = obj._array[i];
			}

			return (_array);
		}

		T& operator[](size_t index)
		{
			if (index >= _size)
				throw std::out_of_range("Array index out of range, exiting.");
			return _array[index];
		}

		const T& operator[](size_t index) const
		{
			if (index >= _size)
				throw std::out_of_range("Array index out of range, exiting.");
			return _array[index];
		}

//fctn member size
		size_t size() const
		{
			return (_size);
		}

};