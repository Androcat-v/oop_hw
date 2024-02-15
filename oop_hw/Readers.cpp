#include "Readers.h"
#include <vector>
#include <iostream>

void ClearStream(std::istream& stream) {
	stream.clear();
	stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int ReadSizeT() {
	int result;
	std::cin >> result;

	while (!std::cin.good() || result < 0) {
		std::cout << "Your input is of wrong type, please enter a positive number" << std::endl;
		ClearStream(std::cin);
		std::cin >> result;
	}

	return result;
}

std::string ReadString() {
	std::string result;
	std::cin >> result;
	return result;
}
