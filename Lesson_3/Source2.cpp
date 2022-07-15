#include <iostream>
#include <string>
#include <limits>

int main()
{
	double value1, value2;
	std::string name;
	std::string str;

	std::cout << "Input your name: ";
	std::cin >> name;


	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Input value1 and value2: ";
	std::cin >> value1 >> value2;


	std::cout << "Hi, " << name << std::endl;
	std::cout << "sum of two values is: " << value1 + value2 << std::endl;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits <std::streamsize> ::max(), '\n');
	std::cout << "Enter string: ";
	std::getline(std::cin, str);
	std::cout << "You enter string is \"" << str << "\"" << std::endl;

	std::system("pause");
	return 0;
}