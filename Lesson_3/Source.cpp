#include <iostream>
#include <iomanip>
#include <limits>

#include <string>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");

	const unsigned text_w = 15;
	const unsigned digit_w = 20;

	std::cout << std::endl << std::setw(text_w) << "short";
	std::cout << std::setw(text_w) << "size is " << sizeof(short) << " byte(s)";



	system("pause");
	return 0;
}