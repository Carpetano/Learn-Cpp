#include <iostream>

/*
	Declaration of functions listed below the main since otherwise functions 
	below the main method won't be usable without unless declaring like so:
*/
static void primitivesAndBasics();
static void arraysAndStrings();


int main() {

	primitivesAndBasics();

	arraysAndStrings();

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


	/*
	
		If statements work just like most programming languages:

		if (condition) {
			Action performed when true
		} else {
			Action performed when false
		}
	
	*/
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
	/*
		Switch statements work just like most programming languages 
		(those that actually have switch statement, I am looking at you python):

		switch(condition)
		{
			case <case>: {
				Action performed when true
				break;
			}
			case <case1>:
			case <case2>:
			case <case3>:
				Action perfomred when either case1 / case2 / case3 was true
				break;
			default:
				Action performed when none of the 'cases' were true
		}
	*/
	switch (myIntInput)
	{
		case 1: {
			std::cout << "Special case: Number is one" << std::endl;
			break;
		}
		case 2: {
			std::cout << "Special case: Number is two" << std::endl;
			break;
		}
		case 3: {
			std::cout << "Special case: Number is three" << std::endl;
			break;
		}
		case -1:
		case -2:
		case -3: {
			std::cout << "Special case: -1 / -2 / -3" << std::endl;
			break;
		}
		default: {
			std::cout << "Not a number considered 'special' ( not 1, 2 or 3 / -3, -2, -1 )" << std::endl;
			break;
		}
	}


	/*
	
		While loops work just like most programming languages.

		while( condition ) {
			Action performed as long as condition from above is true
		}

	*/

	int myLoopInt = -1;
	
	while (myLoopInt < 0) {
		std::cout << "Enter a positive number > ";
		std::cin >> myLoopInt;
	}

	/*
	
		For loops work just like most programming languages.

		for( <declaration of variable> ; <loop until condition is met> ; <action performed per loop iteration> ) {
			Action performed until condition from above is true
		}
	
	*/

	std::cout << "Counting from 0 to " << myLoopInt - 1 << std::endl;

	for (int i = 0; i < myLoopInt; i++) {
		std::cout << " " << i;
	}

}


static void arraysAndStrings() {

	

}










