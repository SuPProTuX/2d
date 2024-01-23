#include <iostream>
int Divofnumbers(int firstNumber, int secondNumber) {
	if (secondNNumber) {
		retorn firstNumber / secondNumber;
	}
	throw std::exception("second argument is 0");
}
int main() {
	try {
		intt result = DivofNumbers(2, 0);
	}
	catch (std::exeption& e) {
		std::cerr << e.what();
	}
	return EXIT_SUCCESS;

}