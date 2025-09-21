#include <iostream>

int main() {

	int x; // Declare an integer variable named x
	x = 5; // Assign the value 5 to the variable x

	int y = 10; // Declare and initialize an integer variable named y with the value 10

	int sum = x + y; // Declare and initialize an integer variable named sum with the value of x + y

	std::cout << x << '\n'; // Print the value of x to the console
	std::cout << y << '\n'; // Print the value of y to the console
	std::cout << sum << '\n'; // Print the value of sum to the console

	// integer can only hold whole numbers (positive and negative), if we try to assign a decimal value to an integer, it will truncate the decimal part
	
	int z = 5.5;

	// Print the value of z to the console, will output 5
	std::cout << z << '\n'; 

	// If we want to hold decimal values, we can use the float or double data types
	// Declare and initialize a double variable named a with the value 5.59
	double price = 5.59; 
	std::cout << price << '\n'; // Print the value of a to the console, will output 5.59


	// char data type is used to hold a single character, it is enclosed in single quotes
	char letter = 'A'; // Declare and initialize a char variable named letter with the value 'A'
	std::cout << letter << '\n'; // Print the value of letter to the console, will output A

	// char can also hold special characters like newline, tab, etc.
	char newline = '\n'; // Declare and initialize a char variable named newline with the value '\n'
	std::cout << "Hello" << newline << "World" << '\n'; // Print Hello and World on separate lines

	// bool data type is used to hold a boolean value, it can be either true or false
	bool isTrue = true; // Declare and initialize a bool variable named isTrue with the value true
	std::cout << isTrue << newline; // Print the value of isTrue to the console, will output 1 (true is represented as 1 and false as 0)

	bool isFalse = false; // Declare and initialize a bool variable named isFalse with the value false
	std::cout << isFalse << newline; // Print the value of isFalse to the console, will output 0

	// string data type is used to hold a sequence of characters, it is enclosed in double quotes
	std::string name = "Libbie-Rose"; // Declare and initialize a string variable named name with the value "Libbie-Rose"
	std::cout << name << newline; // Print the value of name to the console, will output Libbie-Rose

	// We can concatenate strings using the + operator
	std::string greeting = "Hello, " + name + "!"; // Declare and initialize a string variable named greeting with the value "Hello, " + name + "!"
	std::cout << greeting << newline; // Print the value of greeting to the console, will output Hello, Libbie-Rose!
	
	// We can also do something like this
	std::cout << "Hello, " + name + "!" << newline; // Print Hello, Libbie-Rose! to the console
	
	// Application ran successfully, return 0;
    return 0;
}