#include <iostream>
#include <iomanip>
#include <limits>

#include <string>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");

	const unsigned text_w = 14;
	const unsigned digit_w = 11;

	// short
	std::cout << std::endl << std::setw(text_w) << "short";
	std::cout << std::setw(text_w) << "size is " << sizeof(short) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<short>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<short>::max();

	// unsigned short
	std::cout << std::endl << std::setw(text_w) << "unsigned short";
	std::cout << std::setw(text_w) << "size is " << sizeof(unsigned short) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<unsigned short>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<unsigned short>::max();

	// int
	std::cout << std::endl << std::setw(text_w) << "int";
	std::cout << std::setw(text_w) << "size is " << sizeof(int) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<int>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<int>::max();

	// unsigned int
	std::cout << std::endl << std::setw(text_w) << "unsigned int";
	std::cout << std::setw(text_w) << "size is " << sizeof(unsigned) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<unsigned>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<unsigned>::max();

	// long
	std::cout << std::endl << std::setw(text_w) << "long";
	std::cout << std::setw(text_w) << "size is " << sizeof(long) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<long>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<long>::max();

	// long long
	std::cout << std::endl << std::setw(20) << "long long";
	std::cout << std::setw(text_w) << "size is " << sizeof(long long) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(2 * digit_w) << std::numeric_limits<long long>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(2 * digit_w) << std::numeric_limits<long long>::max();

	// unsigned long long
	std::cout << std::endl << std::setw(20) << "unsigned long long";
	std::cout << std::setw(text_w) << "size is " << sizeof(unsigned long long) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(2 * digit_w) << std::numeric_limits<unsigned long long>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(2 * digit_w) << std::numeric_limits<unsigned long long>::max();

	// unsigned size_t
	std::cout << std::endl << std::setw(20) << "std::size_t";
	std::cout << std::setw(text_w) << "size is " << sizeof(std::size_t) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(2 * digit_w) << std::numeric_limits<std::size_t>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(2 * digit_w) << std::numeric_limits<std::size_t>::max();

	// bool
	std::cout << std::endl << std::setw(text_w) << "bool";
	std::cout << std::setw(text_w) << "size is " << sizeof(bool) << " byte(s)";
	std::cout << std::setw(text_w) << "min value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<bool>::min();
	std::cout << std::setw(text_w) << "max value = ";
	std::cout << std::setw(digit_w) << std::numeric_limits<bool>::max();

	std::endl(std::cout); // ???
	system("pause");
	return 0;
}