/*A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn’t provide a value for the argument with a default value. In case any value is passed the default value is overridden.
Advantages of Default Arguments:

Default arguments are useful when we want to increase the capabilities of an existing function by adding another default arguments.
It helps in reducing the size of program.
Default arguments improves consistency of program.
Disadvantages of Default Arguments:

It increase the execution time as compiler need to replace the omitted arguments by there default values in the function call.*/




// CPP Program to demonstrate Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0)
{
	return (x + y + z + w);
}

// Driver Code
int main()
{
	// Statement 1
	cout << sum(10, 15) << endl;

	// Statement 2
	cout << sum(10, 15, 25) << endl;

	// Statement 3
	cout << sum(10, 15, 25, 30) << endl;
	return 0;
}

