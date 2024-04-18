#include <iostream>

/*
	Declaration of functions listed below the main since otherwise functions 
	below the main method won't be usable without unless declaring like so:
*/
static void primitivesAndBasics();


int main() {

	primitivesAndBasics();

	return 0;
}

/*

	Compilation of basic interaction with primitive datatypes, printing.
	Does NOT include strings since it's not a primitive datatype

*/
static void primitivesAndBasics() {

	/*
	
		Variable declaration of primitives is just like most languages:

		<datatyle> <name> = <value>

	*/
	short myShort = 100;
	int myInteger = -1337;
	long myLong = 94123334;
	float myFloat = 321.213f;
	double myDouble = 12312.3123123;

	/*
		
		Printing through console in C++ can be done using std from the standard C++ library.

		std::endl -> Similar to escape sequence: "\n"

		C++:
			std::cout << "Hello World" << std::endl;

		Java:
			System.out.println("Hello World");

		Python:
			print('Hello World')

	*/
	std::cout << "myShort value: " << myShort << std::endl;
	std::cout << "myInteger value: " << myInteger << std::endl;
	std::cout << "myLong value: " << myLong << std::endl;
	std::cout << "myFloat value: " << myFloat << std::endl;
	std::cout << "myDouble value: " << myDouble << std::endl;

	/*
		Storing user input using standard C++ library.

		C++:
			std::cin >> myVariable; ( Must be declared ahead )

		Java:
			Scanner scanner = new Scanner(System.in);
			int myInput = scanner.nextInt();

		Python:
			myInput = input('Enter something > ')


	*/
	std::cout << "Enter a number > ";
	int myIntInput;
	std::cin >> myIntInput;
	std::cout << "You entered: " << myIntInput << std::endl;

	if (myIntInput == 0)
	{
		std::cout << "I don't know if it counts as a positive or negative number, I guess it's neither" << std::endl;
	}
	else {

		if (myIntInput > 0) {
			std::cout << myIntInput << " is a positive number" << std::endl;
		}
		else {
			std::cout << myIntInput << " is a negative number" << std::endl;
		}

	}

}






