//This program will compute and print out sum, difference, product, and division of 2 integers
#include <iostream>
using namespace std;
 
int main() 
{
    int int1, int2;

    // Ask the user to input the integers
	cout << "Enter first number: "; 
	cin >> int1; 
	  
	cout << "Enter second number: "; 
	cin >> int2; 

    // Compute the sum
    int sum = int1 + int2;

    // Compute the difference
    int difference = int1 - int2;

    // Compute the product
    int product = int1 * int2;

    // Compute the division
    float division = static_cast<float>(int1) / int2;

    // Print the results
    std::cout << "The sum of " << int1 << " and " << int2 << " is: " << sum << std::endl;
    std::cout << "The difference of " << int1 << " and " << int2 << " is: " << difference << std::endl;
    std::cout << "The product of " << int1 << " and " << int2 << " is: " << product << std::endl;
    std::cout << "The division of " << int1 << " and " << int2 << " is: " << division << std::endl;

    return 0;
}
