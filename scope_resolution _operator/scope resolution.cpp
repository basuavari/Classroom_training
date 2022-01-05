/*Scope resolution operator (::) in C++ is used to define a function outside a class or when we want to use a global variable but also has a local variable with the same name.*/




#include <iostream>
using namespace std;
 
char c = 'a';     // global variable (accessible to all functions)
 
int main() {
  char c = 'b';   // local variable (accessible only in main function)
 
  cout << "Local  variable: " << c << "\n";      
  cout << "Global variable: " << ::c << "\n";  // Using scope resolution operator
 
  return 0;
}