#include "../includes/Array.hpp"
#define MAX_VAL 750

int main()
{
    const Array<int>			intArray;
	Array<std::string>			stringArray(5);
	Array<float>				floatArray(2);

	Array<std::string>			peter;
	const Array<std::string>	peter2;

	
	stringArray[0] = "Climb";
	stringArray[1] = "to the summit";
	stringArray[2] = "then, ";
	stringArray[3] = "top down";
	stringArray[4] = "paraglide.";
	
	const Array<std::string> michel(stringArray);

	floatArray[0] = 0.42;
	floatArray[1] = 0.0;

	std::cout << "intArray size:    " << intArray.size() << std::endl;
	std::cout << "stringArray size: " << stringArray.size() << std::endl;

	stringArray = michel;

	peter = peter2;
	
	try
	{
		std::cout << stringArray[0] << std::endl;
		std::cout << michel[1] << std::endl;
		std::cout << stringArray[2] << std::endl;
		std::cout << michel[3] << std::endl;
		std::cout << stringArray[4] << std::endl;
		std::cout << stringArray[100] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << floatArray[1] << std::endl;
		std::cout << floatArray[-2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}

// int main(int, char**)
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