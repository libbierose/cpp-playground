#include <iostream>

int main() {

	// Print "I like pizza!" to the console
	std::cout << "I like pizza!";
	// If I add another std::cout statement, it will continue on the same line
	std::cout << " It's really good!";

	/*
		Output is all on one line because std::cout does not add a newline by default
		To add a newline, we can use std::endl or '\n', I will use '\n' here to break up the code as I go through the basics of c++
	*/
	std::cout << std::endl;
	std::cout << std::endl << "Multiline output example using std::endl:" << std::endl;

	// Multiline console output I will use std::endl now to show the difference
	std::cout << "I like pizza!" << std::endl;
	std::cout << "It's really good!" << std::endl;

	std::cout << '\n' << "Multiline output example using \\n:" << '\n';
	/*
		using '\n' to add newlines is my preferred method like below and gives better performance
		However endl does flush the output buffer which can be useful in some cases
	*/

	std::cout << "I like pizza!" << '\n';
	std::cout << "It's really good!" << '\n';

	// End of code return 0 for successful execution
	return 0;
}