#include "../includes/Array.hpp"
#define MAX_VAL 750

int main()
{
	const Array<int>	intArray;

	std::cout << GREY << "---Construction sans parametre---" << RESET << std::endl;
	std::cout << "intArray size:    " << intArray.size() << std::endl;

	std::cout << GREY << "---Construction avec un paramètre de type unsigned int n---" << RESET << std::endl;
	int	*a = new int[MAX_VAL];
	// for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     a[i] = value;
    // }
	std::cout << "a: " << *a << std::endl;


	std::cout << GREY << "---Construction avec les parametres---" << RESET << std::endl;

	Array<std::string>	stringArray(5);

	stringArray[0] = "	0";
	stringArray[1] = "	1";
	stringArray[2] = "	2";
	stringArray[3] = "	3";
	stringArray[4] = "	4";

	try
	{
		std::cout << stringArray[0] << std::endl;
		std::cout << stringArray[1] << std::endl;
		std::cout << stringArray[2] << std::endl;
		std::cout << stringArray[3] << std::endl;
		std::cout << stringArray[4] << std::endl;
		std::cout << stringArray[100] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED <<e.what() << RESET << std::endl;
	}

	std::cout << GREY << "---Construction par recopie---" << RESET << std::endl;

	Array<std::string> cpyArray(stringArray);
	cpyArray[0] = "	42";

	try
	{
		std::cout << "stringArray[0]: " << stringArray[0] << "" << std::endl;
		std::cout << "cpyArray[0]: " << cpyArray[0] << "" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED <<e.what() << RESET << std::endl;
	}
	std::cout << "cpyArray size: " << cpyArray.size() << std::endl;

	std::cout << GREY << "Copie" << RESET << std::endl;
	stringArray = cpyArray;
	try
	{
		std::cout << "cpyArray[0]: " << cpyArray[0] << "" << std::endl;
		std::cout << "stringArray[0]: " << stringArray[0] << "" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED <<e.what() << RESET << std::endl;
	}
	std::cout << GREY << "Modification" << RESET << std::endl;
	stringArray[0] = "Voila";
	try
	{
		std::cout << "stringArray[0]: " << stringArray[0] << "" << std::endl;
		std::cout << "cpyArray[0]: " << cpyArray[0] << "" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED <<e.what() << RESET << std::endl;
	}


	std::cout << GREY << "---Autre type---" << RESET << std::endl;

	Array<float>		floatArray(2);
	floatArray[0] = 0.42;
	floatArray[1] = 0.0;

	try
	{
		std::cout << floatArray[1] << std::endl;
		std::cout << floatArray[-2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete [] a;
	return (0);
}




// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     std::cout << "1" << std::endl;
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     std::cout << "2" << std::endl;
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }