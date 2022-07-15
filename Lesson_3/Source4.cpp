#include <iostream>
#include <vector>
#include <bitset>

int main(int, char* [])
{
	bool t = true; //false
	std::cout << "Size of type bool is: " << sizeof(bool) << std::endl;

	bool t2 = t && false;
	bool t3 = t || false;
	bool t4 = !false;
	std::cout << "t2 = " << t2 << " t3 = " << t3 << " t4 = " << t4 << std::endl;

	int a = 2;       // 0010
	int b = 3;       // 0011
	int r1 = a & b;  // 0010
	int r2 = a | b;  // 0011
	int r3 = a ^ b;  // 0001
	std::cout << "r1 = " << r1 << std::endl;
	std::cout << "r2 = " << r2 << std::endl;
	std::cout << "r3 = " << r3 << std::endl;

	return 0;
}

//// bitset_any.cpp
//// compile with: /EHsc
//#include <bitset>
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	bitset<5> b1(6);
//	bool b, rb;
//
//	cout << "The original bitset b1( 6 ) is: ( " << b1 << " )"
//		<< endl;
//
//	b = b1.any();
//
//	if (b)
//		cout << "At least one of the bits in bitset is set to 1."
//		<< endl;
//	else
//		cout << "None of the bits in bitset are set to 1."
//		<< endl;
//
//	bitset<5> rb1;
//	rb1 = b1.reset();
//
//	cout << "The reset bitset is: ( " << b1 << " )"
//		<< endl;
//
//	rb = rb1.any();
//
//	if (rb)
//		cout << "At least one of the bits in the reset bitset "
//		<< "are set to 1." << endl;
//	else
//		cout << "None of the bits in bitset b1 are set to 1."
//		<< endl;
}