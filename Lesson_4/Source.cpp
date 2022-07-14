#include <iostream>

float power(float value, unsigned pow) {
	float _temp = 1.0f;
	for (size_t i = 0; i < pow; ++i) {
		_temp *= value;
	}

	return _temp;
}

int main()
{
	auto x = power(2.5f, 4);

	std::cout << x << std::endl;
	std::cout << pow(2.5f, 4) << std::endl;

	system("pause");
	return 0;
}