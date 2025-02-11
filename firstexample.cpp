#include <iostream>

/// \brief A simple function that adds two numbers
/// \param a First number
/// \param b Second number
/// \return The sum of the two numbers
int add(int a, int b) {
    return a + b;
}

/// \brief Main function
/// \details This function calls the add() function and prints the result
int main() {
    int result = add(5, 10);
    std::cout << "The sum of 5 and 10 is " << result << std::endl;
    return 0;
}
