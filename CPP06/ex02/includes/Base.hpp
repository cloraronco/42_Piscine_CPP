#pragma once
#include <iostream>
#include <stdint.h>
#include <typeinfo>
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

class Base
{
    public:
        Base ();
        virtual ~Base ();
};