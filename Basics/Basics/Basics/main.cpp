#include <iostream>
#include "Employee.h"
#include <Windows.h>

/*
	Declaration of functions listed below the main since otherwise functions 
	below the main method won't be usable without unless declaring like so:
*/
static void primitivesAndBasics();
static void arraysAndmultidimensionalArrays();
static void strings();
static void objects();
static void pointers();

int main() {

	primitivesAndBasics();

	arraysAndmultidimensionalArrays();

	strings();

	objects();

	pointers();

	return 0;
}

/*

	Compilation of basic interaction with primitive datatypes, printing.
	Does NOT include strings since it's not a primitive datatype

*/
static void primitivesAndBasics() {

	std::cout << "\n =-= Primitive Datatyles and Basic logic Flow =-= \n" << std::endl;

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
		Must include <windows.h> 
		DWORD = unsigned 32-bit integer
			(That means it's an int that can go from 0 - 2147483647)
			unsigned = 1st bit doesn't represent wether it's positive or negative, 
			so it always does positive
	*/
	DWORD myDWORD = 54321;

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

	std::cout << "DWORD value: " << myDWORD << std::endl;

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

/*

	A few examples of printing content of number arrays and multidimensional arrays.

*/
static void arraysAndmultidimensionalArrays() {

	std::cout << "\n\n =-= Arrays & Multidimensional Arrays =-= \n";

	// Create an array of numbers from 0 - 19
	int arrayOfNumbers[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

	std::cout << "\nArray of Numbers from 0-19: " << std::endl;

	// For loop that prints each number in the array regardless of it's size separating with spaces
	for (int i = 0; i < sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]); i++) 
	{
		std::cout << " " << arrayOfNumbers[i];
	}

	std::cout << "\nArray of Numbers from 0-19 IN REVERSE: " << std::endl;

	// For loop that prints each number in the array in reverse regardless of it's size separating with spaces
	for (int i = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]) - 1; i >= 0; i--) 
	{
		std::cout << " " << arrayOfNumbers[i];
	}

	// 
	int multidimensionalArrayOfNumbers[][5] = {
		{0,1,2,3,4},
		{5,6,7,8,9},
		{10,11,12,13,14},
		{15,16,17,18,19},
		{20,21,22,23,24}
	};

	std::cout << "\nMultidimensional array 0-24 / 5: \n" << std::endl;

	for (int i = 0; i < sizeof(multidimensionalArrayOfNumbers) / sizeof(multidimensionalArrayOfNumbers[0]); i++)
	{
		for (int j = 0; j < sizeof(multidimensionalArrayOfNumbers[i]) / sizeof(multidimensionalArrayOfNumbers[i][0]); j++)
		{
			std::cout << " " << multidimensionalArrayOfNumbers[i][j];
		}
		std::cout << "\n";
	}

}


static void strings() {

	std::cout << "\n\n =-= Strings =-= \n";

	std::string myString = "hello, this is a standard string";

	std::string stringFromCharacterArray = {'S','t','r','i','n','g',' ', 'F','r','o','m',' ', 'c','h','a','r','a','c','t','e','r','s'};

	std::cout << myString << std::endl << stringFromCharacterArray << std::endl;

	std::string part1 = "First half";
	std::string part2 = "Second Half";

	std::string combined = part1 + " - " + part2;

	std::cout << combined << std::endl;

}

/*

	Example of an Employee object, containing a name and another Object of type Job
	which also has a job name and salary.

	Employee: 
	  L	 Name (string)
		 Job  (Object)	
		  L  name    (string)
		  L  salary  (int)

*/
static void objects() {

	// Create Job object 
	Job salesMan("Sales", 1500);

	// Create Employee object and add the Job object created previously
	Employee objectTest("John", salesMan);

	// Print info about the object
	std::cout << objectTest.toString();

}

/*

	Oh boy, pointers

*/
static void pointers() {

	// Declare a variable 
	int myNumber = 137;

	// Declare a pointer veriable ( indicated by the asterisk '*' after the datatype ) 
	// and copy whatever that originalvariable had by adding the ampersand character 
	// '&', then variable name where to copy from
	// in this case it should be 137
	int* myPointerVariable = &myNumber;

	// Print original variable value and memory address
	std::cout << "Original variable: " << myNumber << " - Memory address: " << &myNumber << std::endl;

	// Print the copy variable which has the address of the original variable
	std::cout << "Memory address of original variable stored in a different one: " << myPointerVariable << std::endl;

	// Print the value of the variable that the myPointerVariable is pointing to since it has an asterisk
	std::cout << "Now printing the value because I put an asterisk: " << *myPointerVariable << std::endl;

	// Modifying the value of address that is pointing to since there is an asterisk
	*myPointerVariable += 1;
	
	std::cout << "I added 1 to the original variable by using *myPointerVariable and now the value is: " << myNumber << std::endl;

	std::cout << std::endl << "=-= In short:\n & -> Means memory address\n * -> Means value in the memory address\n" << "\n &myPointerVariable = " << &myPointerVariable << "\n *myPointerVariable = " << *myPointerVariable << std::endl;

}










